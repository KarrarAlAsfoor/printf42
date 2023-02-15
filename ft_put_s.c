/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:30:41 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/22 23:24:31 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *str)
{
	int	i;

	if (!str)
		return (ft_put_s(S_EMPTY));
	i = 0;
	while (str[i])
	{
		ft_put_c(str[i]);
		i++;
	}
	return (i);
}
