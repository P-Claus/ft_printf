/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:43:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/15 19:05:28 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int	count;
	//int	count2;
	
	count = ft_printf("The string is: %s and %s\n", "Hello", "friend");
	printf("The amount of chars is: %d\n", count);

	//ft_printf("The chars written are: %d\n", count);
	//printf("The char is: %c\n", 'h');
	//printf("The char written is: %d\n", count2);
}
