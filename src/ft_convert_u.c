/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:55:53 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/18 16:06:41 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_u(va_list ap)
{
	unsigned int	i;
	char			*dest;

	i = va_arg(ap, unsigned int);
	dest = ft_utoa(i);
	return (dest);
}
