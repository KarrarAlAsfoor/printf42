/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:57:34 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/17 21:08:27 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_i(va_list ap)
{
	char	*dest;
	int		i;

	i = va_arg(ap, int);
	dest = ft_itoa(i);
	return(dest);
}
