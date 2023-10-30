/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:37:50 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/30 17:42:47 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_adress(unsigned long int adress, char *str)
{
    unsigned long int  base;

    base = ft_strlen(str);
    if (adress < 0)
    {
        printf_putchar('-');
        adress = -adress;
    }
    if (adress >= base)
    {
        print_adress(adress / base, str);
        print_adress(adress % base, str);
    }
    if (adress < base)
    {
        printf_putchar(str[adress]);
    }
}

int    count_adress(void const *adr, char *str)
{
    unsigned long int   adress;
    int count;
    int base;

    adress = (unsigned long int) adr;
    base = ft_strlen(str);
    printf_putstr("0x");
    count = 2;
    print_adress(adress, str);
    if (adress == 0)
        return (3);
    while (adress > 0)
    {
        adress = adress / base;
        count++;
    }
    return (count);
}
