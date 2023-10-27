/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:44:37 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/27 17:16:42 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conversions(va_list ap, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = printf_putchar(va_arg(ap, int));
	else if (c == 's')
		len = printf_putstr(va_arg(ap, char *));
	else if (c == '%')
		len = printf_putchar('%');
	if (c == 'd' || c == 'i')
		ft_putnbr_base(va_arg(ap, int), "0123456789");
	else if (c == 'u')
		ft_uputnbr(va_arg(ap, unsigned int));
	if (c == 'x')
		ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	//else if (c == 'p')
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	if (!format)
		return (0);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = count + conversions(ap, format[i + 1]);
			i++;
		}
		else
		{
			printf_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}

int	main()
{
	ft_printf("salut ca va %X et toi %d %%?", 450515557, -45593);
}