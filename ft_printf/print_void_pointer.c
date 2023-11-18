/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:02:24 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/18 16:08:56 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_void_pointer(void *p, int base)
{
	if (*((int *)p) || *((int *)p) >= 0)
	{
		printf("The void pointer stores and int");
		return (base);
	}
	else
	{
		printf("The void pointer does not store an int");
		return (base - 16);
	}
}
