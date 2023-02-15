/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:22:54 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/22 23:23:27 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(unsigned long ptr)
{
	int	count;

	if (!ptr)
		return (ft_put_s(P_EMPTY));
	count = 0;
	count += ft_put_s("0x");
	count += ft_put_x(ptr, 'x');
	return (count);
}
