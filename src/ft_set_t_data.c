/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_t_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:50:24 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/19 12:19:20 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data	*ft_set_t_data(t_data *db)
{
	db = malloc(sizeof(t_data));
	if (db == NULL)
		return (NULL);
	db->len = 0;
	db->i = 0;
	db->curr = NULL;
	db->dest = NULL;
	return (db);
}
