/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 07:56:05 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/20 17:18:56 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	//unsigned int	i;

	//i = 86867696;
	printf(" - %d\n", ft_printf(" %c %c %c ", '0', 0, '1'));
	printf(" - %d\n", printf(" %c %c %c ", '0', 0, '1'));
	return (0);
}
