/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:59:26 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/25 12:33:48 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_option(char format, va_list *ap, int *count)
{
	if (format == '%')
		*count = *count + write(1, "%", 1);
	else if (format == 'c')
		*count = *count + ft_putchar(va_arg(*ap, int));
	else if (format == 's')
		*count = *count + ft_putstr(va_arg(*ap, char *));
	else if (format == 'p')
	{
		*count = *count + write(1, "0x", 2);
		*count = *count + ft_putnbr_base(va_arg(*ap, t_ull), HEX_LOWER);
	}
	else if (format == 'd' || format == 'i')
		*count = *count + ft_putnbr(va_arg(*ap, int));
	else if (format == 'u')
		*count = *count + ft_putnbr_base(va_arg(*ap, unsigned int), DECIMAL);
	else if (format == 'x')
		*count = *count + ft_putnbr_base(va_arg(*ap, unsigned int), HEX_LOWER);
	else if (format == 'X')
		*count = *count + ft_putnbr_base(va_arg(*ap, unsigned int), HEX_UPPER);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_option(*format, &ap, &count);
		}
		else
		{
			write(1, (char *)format, 1);
			count++;
		}
		format++;
	}
	va_end (ap);
	return (count);
}
