/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:46:28 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/18 16:17:06 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_s(va_list ap)
{
	char	*str;

	str = va_arg(ap, char*);
	if (str == NULL)
		return (NULL);
	str = (char *)ft_strdup((const char *)str);
	return (str);
}