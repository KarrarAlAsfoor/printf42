/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:01:24 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/22 23:21:54 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
	{
		count += ft_put_c(nb + '0');
	}
	else
	{
		count += ft_put_u(nb / 10);
		count += ft_put_u(nb % 10);
	}
	return (count);
}
