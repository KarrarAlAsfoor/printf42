# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 05:45:55 by Karrar            #+#    #+#              #
#    Updated: 2023/01/19 11:40:24 by Karrar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

AR = ar

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

ARFLAGS = rc

SRC_DIR = ./src

INC_DIR = ./includes

LIBFT_DIR = ./libft

LIBFT = $(LIBFT_DIR)/libft.a

SRC_FILES = ft_printf.c \
			ft_helpers.c \
			ft_utoa.c \
			ft_utohexa.c \
			ft_set_t_data.c \
			ft_convert_c.c \
			ft_convert_s.c \
			ft_convert_p.c \
			ft_convert_i.c \
			ft_convert_u.c \
			ft_convert_x.c

OBJS = ${SRC_FILES:.c=.o}

%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@

$(NAME) : $(OBJS) $(LIBFT)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT) :
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)


all : $(NAME)

fclean : clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

clean :
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJS)

re : fclean all

.PHONY : all clean fclean re