/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:20:31 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/15 21:46:01 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int     print_format(char specifier, va_list ap);
int     print_character(int c);
int     ft_printf(const char *format, ...);
int	print_string(char *str);
int	print_digit(long n, int base);

#endif
