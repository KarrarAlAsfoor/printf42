/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:49:43 by Karrar            #+#    #+#             */
/*   Updated: 2023/02/14 16:07:56 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_istype(char a)
{
	int			i;
	char		*charset;

	charset = "cspdiuxX%";
	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == a)
			return (charset[i]);
		i++;
	}
	return (0);
}
