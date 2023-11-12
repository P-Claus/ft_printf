/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:43:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/12 10:41:34 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	int	count;

	count = ft_printf("The char is:	%c\n", "H");
	ft_printf("The chars written are: %d\n", count);
}
