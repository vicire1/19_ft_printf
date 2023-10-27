/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:55:35 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/27 16:39:54 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int 	ft_printf(const char *format, ...);
int 	printf_putstr(char *str);
int 	count_char(int n);
int     ft_strlen(char *str);
int	    printf_putchar(int c);
void    ft_putnbr_base(int nb, char *str);
void	ft_uputnbr(unsigned int n);

#endif