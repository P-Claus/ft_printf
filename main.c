/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:43:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/12 09:49:48 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incude "libftprintf.h"

int	main(void)
{
	int	count;

	count = ft_printf("hello %s\n", "Harry");
	ft_printf("The chars written are: %d\n", count);
}
