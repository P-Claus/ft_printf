/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:43:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/16 17:29:39 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int count;
	int	count2;
	int	count3;
	
	count = ft_printf("The string is: %i\n", 45678);
	ft_printf("The amount of characters printed is: %d\n", count);

	count3 = printf("The unsigned decimal number is: %u\n", 0);
	printf("The amount of characters printed is: %i\n", count3);

	count2 = ft_printf("The unsigned decimal number is: %u\n", 0);
	ft_printf("The amount of characters printed is: %i\n", count2);
}
