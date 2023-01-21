/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:23:24 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/18 13:34:55 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_X(va_list ap)
{
	size_t	n;
	char	*dest;

	n = (size_t)va_arg(ap, unsigned int);
	dest = ft_utohexa(n, 'X');
	return (dest);
}

char	*ft_convert_x(va_list ap)
{
	size_t	n;
	char	*dest;

	n = (size_t)va_arg(ap, unsigned int);
	dest = ft_utohexa(n, 'x');
	return (dest);
}