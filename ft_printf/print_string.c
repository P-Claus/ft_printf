/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:57:16 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/18 16:32:44 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (count);
	while (*str)
	{
		print_character((int)*str);
		count++;
		str++;
	}
	return (count);
}
