# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 19:04:13 by zihirri           #+#    #+#              #
#    Updated: 2022/03/08 20:59:30 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# DONT FORGET TO ADD THE FLAGS AT THE END 
CC = gcc 

RM = @rm -rf

CFLAGS = -Wall -Werror -Wextra 

FILES = ./push_swap_utils/ft_atoi.c \
		./push_swap_utils/opA.c \
		./push_swap_utils/opB.c \
		./push_swap_utils/operation.c \
		./push_swap_utils/checker.c \
		./push_swap_utils/algo1.c \
		./push_swap_utils/utils.c \
		./push_swap_utils/ft_lstsize.c \
		./push_swap_utils/algo2.c \
		./push_swap_utils/algo_100.c \
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