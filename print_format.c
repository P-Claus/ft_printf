/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:07:47 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/12 10:36:41 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_character(va_arg(ap, int));
	/*else if (specifier == 's')
		count += print_string(va_arg(ap, char *));
	else if (specifier == 'd')
		count += print_digit(va_arg(ap, int), 10);
	else if (specifier == 'x')
		count += print_digit(va_arg(ap, unsigned int), 16);
	else
		count += write(1, &specifier, 1); //writes specifier is it's a weird one (temporary)*/
	return (count);
}
