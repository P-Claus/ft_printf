/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:43:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/21 22:01:07 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
//	int 	count = 'h';
//	void *ptr = &count;
//	int	count2;
//	int	count3;
//	int	count4;
//	int	count5;
	int	count1;
	int	count2;
	void	*ptr1;
//	void	*ptr2;

	ptr1 = (void*) 0;
//	ptr2 = (void*) 4294965;

	count1 = ft_printf("The void pointer is: %p\n", ptr1);
	ft_printf("The total amount of characters printed is: %d\n", count1);
	count2 = printf("The void pointer is: %p\n", ptr1);
	printf("The total amount of characters printed is: %d\n", count2);
	
//	ft_printf("The void pointer is: %p\n", ptr);
//	printf("The void pointer is: %p\n", ptr);
//	ft_printf("The amount of characters printed is: %d\n", count);

//	count3 = printf("The string is: %s\n", "");
//	printf("The amount of characters printed is: %i\n", count3);

//	count2 = ft_printf("The unsigned decimal number is: %u\n", -5678);
//	ft_printf("The amount of characters printed is: %i\n", count2);

//	count4 = printf("The hexadecimal value is: %X\n", 2335678);
//	printf("The amount of characters printed is: %d\n", count4);

//	count5 = ft_printf("The hexadecimal value is: %X\n", 2335678);
//	ft_printf("The amount of characters printed is: %d\n", count5);
}
