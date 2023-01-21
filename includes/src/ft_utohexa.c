/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utohexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:11:42 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/18 15:33:28 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_size(size_t nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

char	*ft_utohexa(size_t nb, char c)
{
	int		size;
	char	*dest;

	size = ft_get_size(nb) ;
	dest = malloc(sizeof(char) * size + 1);
	if (dest == NULL)
		return (NULL);
	dest[size] = '\0';
	if (c == 'x')
	{
		while (--size >= 0)
		{
			dest[size] = ("0123456789abcdef")[nb % 16];
			nb /= 16;
		}
	}
	else if (c == 'X')
	{
		while (--size >= 0)
		{
			dest[size] = ("0123456789ABCDEF")[nb % 16];
			nb /= 16;
		}
	}
	return (dest);
}