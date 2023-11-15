/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:57:16 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/15 20:23:53 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_string(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		print_character((int)*str);
		count++;
		str++;
	}
	return (count);
}
