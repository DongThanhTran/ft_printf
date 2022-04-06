/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 12:48:44 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/10 18:43:14 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# define OCTAL "01234567"
# define DECIMAL "0123456789"
# define BINARY "01"

typedef unsigned long long	t_ull;

//
//
// ------------------------------------------------------------------ //
// -------------------------String Utilities------------------------- //
// ------------------------------------------------------------------ //
//
//

/**
 * Retrieves the length of a given string.
 * @param str The string.
 * @returns The size of the given string.
 */
size_t	ft_strlen(const char *str);

//
//
// ------------------------------------------------------------------ //
// -------------------------Integer Utilities------------------------ //
// ------------------------------------------------------------------ //
//
//

/**
 * Checks the length of an integer.
 * @param num The integer.
 * @returns Integer length.
 */
int		ft_intlen(int num);

//
//
// ------------------------------------------------------------------ //
// ----------------------Input & Output Utilities-------------------- //
// ------------------------------------------------------------------ //
//
//

/**
 * Prints out a given char.
 * @param c The character to write.
 */
int		ft_putchar(char c);

/**
 * Prints out a given string.
 * @param str The string to write.
 */
int		ft_putstr(char *str);

/**
 * Prints out a given number.
 * @param num The number to write.
 */
int		ft_putnbr(int num);

/**
 * Prints out a given number according to base.
 * @param num The number to write.
 * @param base Base to use.
 */
size_t	ft_putnbr_base(size_t num, const char *baseformat);

#endif