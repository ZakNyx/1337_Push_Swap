# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 19:04:13 by zihirri           #+#    #+#              #
#    Updated: 2022/03/02 18:31:09 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

#NAME_B = so_long_bonus 

CC = gcc 

RM = @rm -rf

CFLAGS = -Wall -Werror -Wextra 

FILES = ./push_swap_utils/ft_atoi.c \
		./push_swap_utils/ft_split.c \
		operation.c \
		push_swap.c
		
#FILES_B = 

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m


all : $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FILES) -o $(NAME) 
	@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"

clean:
	${RM} push_swap.o
	@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"
	

fclean: clean
	${RM} push_swap
	@echo "$(C_RED)[PROJECT.A REMOVED!]$(C_RES)"

re: fclean all