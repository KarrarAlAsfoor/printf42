/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 01:34:59 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/21 00:39:43 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_istype(char *str)
{
	char	*charset;
	int		i;

	charset = malloc(sizeof(char) * 10);
	if (charset == NULL)
		return (0);
	i = 0;
	while ("cspdiuxX%\0"[i] != '\0')
	{
		charset[i] = "cspdiuxX%\0"[i];
		i++;
	}
	charset[i] = '\0';
	i = 0;
	while (charset[i] != '\0')
	{
		if (str[0] == '%' && str[1] == charset[i])
		{
			free(charset);
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_char_to_str(char c)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

char	*ft2_mem_cat(char *dest, char *curr)
{
	dest = malloc(sizeof(char) * ft_strlen(curr) + 1);
	ft_memcpy(dest, curr, ft_strlen(curr));
	dest[ft_strlen(curr)] = '\0';
	free(curr);
	return (dest);
}

char	*ft_mem_cat(char *dest, char *curr)
{
	char	*temp;

	temp = NULL;
	if (dest == NULL)
	{
		dest = ft2_mem_cat(dest, curr);
		return (dest);
	}
	temp = malloc(sizeof(char) * ft_strlen(dest) + 1);
	ft_memcpy(temp, dest, ft_strlen(dest));
	temp[ft_strlen(dest)] = '\0';
	free(dest);
	dest = malloc(sizeof(char) * (ft_strlen(temp) + ft_strlen(curr) + 1));
	ft_memcpy(dest, temp, ft_strlen(temp));
	ft_memcpy(dest + ft_strlen(temp), curr, ft_strlen(curr));
	(dest + ft_strlen(temp))[ft_strlen(curr)] = '\0';
	free(temp);
	free(curr);
	return (dest);
}

