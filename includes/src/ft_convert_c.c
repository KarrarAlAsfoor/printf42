/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 07:56:58 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/20 22:25:31 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_c(va_list ap)
{
	char	*c;
	char	a;

	a = (char)va_arg(ap, int);
	if (a == 0)
	{
		return (S_EMPTY);
	}
	c = malloc(sizeof(char) * 2);
	if (c == NULL)
		return (NULL);
	c[0] = a;
	c[1] = '\0';
	return (c);
}
