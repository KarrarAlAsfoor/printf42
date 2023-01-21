/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:44:26 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/02 20:57:16 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	get_size(int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i += 1;
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	ft_make_itoa(char *digits, int n)
{
	int				i;
	unsigned int	nb;

	i = get_size(n) + 1;
	if (n < 0)
		nb = (unsigned int)(n * -1);
	else
		nb = (unsigned int)n;
	digits[--i] = 0;
	while (--i >= 0 && nb)
	{
		digits[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n == 0)
		digits[i] = '0';
	if (n < 0)
		digits[i] = '-';
}

char	*ft_itoa(int n)
{
	char	*digits;

	digits = NULL;
	digits = malloc(sizeof(char) * (get_size(n) + 1));
	if (digits == NULL)
		return (NULL);
	ft_make_itoa(digits, n);
	return (digits);
}
