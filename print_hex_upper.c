/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:17:34 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/16 21:27:38 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_hex_upper(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";

	if (n < base)
		return (print_character(symbols[n]));
	else
	{
		count += print_hex_upper((n/base), base);
		return (count + print_hex_upper((n % base), base));

	}
}
