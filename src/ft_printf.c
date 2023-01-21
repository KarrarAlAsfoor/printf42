/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 04:36:48 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/21 12:00:54 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_conversion_path(char c, va_list ap)
{
	char	*res;

	res = NULL;
	if (c == 'c')
		res = ft_convert_c(ap);
	if (c == 's')
		res = ft_convert_s(ap);
	if (c == 'p')
		res = ft_convert_p(ap);
	if (c == 'i' || c == 'd')
		res = ft_convert_i(ap);
	if (c == 'u')
		res = ft_convert_u(ap);
	if (c == 'x')
		res = ft_convert_x(ap);
	if (c == 'X')
		res = ft_convert_X(ap);
	if (c == '%')
		res = (char *)ft_strdup("%");
	return (res);
}

static char	ft3_printf(const char *str)
{
	char c;

	c = '\0';
	if (str[1] == 'c')
		c = 'c';
	else if (str[1] == 's')
		c = 's';
	else if (str[1] == 'p')
		c = 'p';
	else if (str[1] == 'd')
		c = 'd';
	else if (str[1] == 'i')
		c = 'i';
	else if (str[1] == 'u')
		c = 'u';
	else if (str[1] == 'x')
		c = 'x';
	else if (str[1] == 'X')
		c = 'X';
	else if (str[1] == '%')
		c = '%';
	return (c);
}

static int	ft2_printf(char *str, t_data *db, va_list ap)
{
	while (str[db->i] != '\0')
	{
		if (str[db->i] == '%')
		{
			if (ft_istype(str + db->i) == 0)
				return (0);
			db->len -= 1;
			db->curr = ft_conversion_path(ft3_printf(str + db->i), ap);
			if (db->curr != NULL)
				db->len += ft_strlen(db->curr);
			if (db->curr == NULL)
				db->len += 1;
			db->i += 1;
		}
		else
			db->curr = ft_char_to_str(str[db->i]);
		if (db->curr != NULL)
			db->dest = ft_mem_cat(db->dest, db->curr);
		db->len++;
		db->i++;
	}
	ft_putstr_fd(db->dest, 1);
	free(db->dest);
	return (db->len);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			len;
	t_data		*db;

	if (str == NULL)
		return (0);
	db = NULL;
	db = ft_set_t_data(db);
	if (db == NULL)
		return (0);
	va_start(ap, str);
	len = ft2_printf((char *)str, db, ap);
	if (len == 0)
	{
		free(db);
		va_end(ap);
		return (0);
	}
	free(db);
	va_end(ap);
	return (len);
}
