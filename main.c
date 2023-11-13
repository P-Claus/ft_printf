/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:43:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/13 21:50:08 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int	count;
	//int	count2;
	
	count = ft_printf("The char is: %c\n", 'm');
	printf("The amount of chars is: %d\n", count);
	//ft_printf("The chars written are: %d\n", count);
	//printf("The char is: %c\n", 'h');
	//printf("The char written is: %d\n", count2);
}
