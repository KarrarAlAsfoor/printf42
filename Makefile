# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 23:42:40 by Karrar            #+#    #+#              #
#    Updated: 2023/01/21 23:57:27 by Karrar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_istype.c \
		ft_printf.c \
		ft_put_c.c \
		ft_put_i.c \
		ft_put_p.c \
		ft_put_s.c \
		ft_put_u.c \
		ft_put_x.c

SRC_OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f

.c.o :
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME): $(SRC_OBJ)
	$(LIB) $(NAME) $(SRC_OBJ)
clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all