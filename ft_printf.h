/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:55:35 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/30 17:50:56 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int 	ft_printf(const char *format, ...);
int 	printf_putstr(char *str);
int     count_unsigned(unsigned int nb, char *str);
int     ft_strlen(char *str);
int	    printf_putchar(int c);
int     count_signed(int nb);
int     count_adress(void const *adr, char *str);

#endif