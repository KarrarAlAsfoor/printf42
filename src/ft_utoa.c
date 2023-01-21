/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:12 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/18 16:09:10 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(unsigned int n)
{
	int		i;
	size_t	nb;

	i = 0;
	if (n == 0)
		return (1);
	nb = (size_t)n;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	ft_make_utoa(char *digits, unsigned int n)
{
	int		i;
	size_t	nb;

	i = get_size(n) + 1;
	nb = (size_t)n;
	digits[--i] = 0;
	while (--i >= 0 && nb)
	{
		digits[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n == 0)
		digits[i] = '0';
}

char	*ft_utoa(unsigned int n)
{
	char	*digits;

	digits = malloc(sizeof(char) * (get_size(n) + 1));
	if (digits == NULL)
		return (NULL);
	ft_make_utoa(digits, n);
	return (digits);
}
