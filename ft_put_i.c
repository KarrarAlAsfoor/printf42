/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:46:31 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/22 23:22:41 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_i(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count += ft_put_c('-');
	}
	if (nb < 10)
	{
		count += ft_put_c(nb + '0');
	}
	else
	{
		count += ft_put_i(nb / 10);
		count += ft_put_i(nb % 10);
	}
	return (count);
}
