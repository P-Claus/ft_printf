/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:20:31 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/18 16:05:53 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	print_format(char specifier, va_list ap);
int	print_character(int c);
int	ft_printf(const char *format, ...);
int	print_string(char *str);
int	print_digit(long n, int base);
int	print_unsigned_int(long n, int base);
int	print_hex_lower(long n, int base);
int	print_hex_upper(long n, int base);
int	print_void_pointer(void *p, int base);

#endif