/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:02:24 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/20 17:12:01 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_void_pointer(long int n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < base)
		return (print_character(symbols[n]));
	else
	{
		count += print_void_pointer((n / base), base);
		return (count + print_void_pointer((n % base), base));
	}
}
