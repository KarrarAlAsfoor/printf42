/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:34:39 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/18 15:26:02 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_get_size(size_t ptr)
{
	size_t	i;

	i = 0;
	while (ptr > 0)
	{
		ptr /= 16;
		i++;
	}
	return (i);
}

static char	*ft_itohex(size_t ptr)
{
	size_t	size;
	char	*dest;

	if (!ptr)
		return (NULL);
	size = ft_get_size(ptr) + 3;
	dest = malloc(sizeof(char) * size);
	if (dest == NULL)
		return (NULL);
	dest[0] = '0';
	dest[1] = 'x';
	dest[--size] = '\0';
	while (--size > 1)
	{
		dest[size] = ("0123456789abcdef")[ptr % 16];
		ptr /= 16;
	}
	return (dest);
}

char	*ft_convert_p(va_list ap)
{
	char	*dest;

	dest = ft_itohex((size_t)va_arg(ap, void*));
	return (dest);
}