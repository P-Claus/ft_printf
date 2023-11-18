/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:07:47 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/18 16:08:25 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_character(va_arg(ap, int));
	else if (specifier == 's')
		count += print_string(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)(va_arg(ap, int)), 10);
	else if (specifier == 'u')
		count += print_unsigned_int((long)(va_arg(ap, int)), 10);
	else if (specifier == 'x')
		count += print_hex_lower((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'X')
		count += print_hex_upper((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'p')
		count += print_void_pointer((va_arg(ap, void *)), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}
