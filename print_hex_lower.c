/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:38:33 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/16 21:21:06 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_hex_lower(int long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < base)
		return(print_character(symbols[n]));
	else
	{
		count += print_hex_lower((n/base), base);
		return (count + print_hex_lower((n % base), base));
	}
}
