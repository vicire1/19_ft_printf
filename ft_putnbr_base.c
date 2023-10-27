/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:00:30 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/27 16:57:47 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_base(int nb, char *str)
{
    int  base;

    base = ft_strlen(str);
    if (nb < 0)
    {
        printf_putchar('-');
        nb = -nb;
    }
    if (nb >= base)
    {
        ft_putnbr_base(nb / base, str);
        ft_putnbr_base(nb % base, str);
    }
    if (nb < base)
    {
        printf_putchar(str[nb]);
    }
}
