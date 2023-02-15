/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:40:38 by Karrar            #+#    #+#             */
/*   Updated: 2023/02/14 18:54:16 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_mainprintf(char spc, va_list va)
{
	int	len;

	len = 0;
	if (spc == '%')
		len = ft_put_c('%');
	else if (spc == 'c')
		len = ft_put_c(va_arg(va, int));
	else if (spc == 's')
		len = ft_put_s(va_arg(va, char *));
	else if (spc == 'i' || spc == 'd')
		len = ft_put_i(va_arg(va, int));
	else if (spc == 'u')
		len = ft_put_u(va_arg(va, unsigned int));
	else if (spc == 'x' || spc == 'X')
		len = ft_put_x(va_arg(va, unsigned int), spc);
	else if (spc == 'p')
		len = ft_put_p(va_arg(va, unsigned long));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	va;

	va_start(va, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_istype(str[i + 1]))
			count += ft_mainprintf(str[i++ + 1], va);
		else if (str[i] == '%' && ft_istype(str[i + 1] == 0))
		{
			write(1, "error\n", 6);
			return (count);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(va);
	return (count);
}
