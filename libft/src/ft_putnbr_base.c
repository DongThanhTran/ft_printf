/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 12:31:20 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/25 12:33:33 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_base(size_t num, const char *baseformat)
{
	size_t	count;
	size_t	base;

	count = 0;
	base = ft_strlen(baseformat);
	if (num < base)
		count = count + ft_putchar(baseformat[num]);
	else
	{
		count = count + ft_putnbr_base(num / base, baseformat);
		count = count + ft_putnbr_base(num % base, baseformat);
	}
	return (count);
}
