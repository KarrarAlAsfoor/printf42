/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 04:37:58 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/20 22:25:46 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

typedef struct	s_data
{
	size_t	len;
	size_t	i;
	char	*curr;
	char	*dest;
}		t_data;

# ifdef __linux__
#  define IS_LINUX 1
#  define OS "LINUX"
#  define S_EMPTY "(null)"
#  define S_EMPTY_L 6
#  define P_EMPTY "(nil)"
#  define P_EMPTY_L 5
# else
#  define IS_LINUX 0
#  define OS "MAC"
#  define S_EMPTY "(null)"
#  define S_EMPTY_L 6
#  define P_EMPTY "0x0"
#  define P_EMPTY_L 3
# endif

int		ft_printf(const char *str, ...);
int		ft_istype(char *str);
char	*ft_char_to_str(char c);
char	*ft_utoa(unsigned int n);
char	*ft_utohexa(size_t nb, char c);
char	*ft_mem_cat(char *dest, char *curr);
char	*ft_convert_c(va_list ap);
char	*ft_convert_s(va_list ap);
char	*ft_convert_p(va_list ap);
char	*ft_convert_i(va_list ap);
char	*ft_convert_u(va_list ap);
char	*ft_convert_x(va_list ap);
char	*ft_convert_X(va_list ap);
t_data	*ft_set_t_data(t_data *db);
#endif