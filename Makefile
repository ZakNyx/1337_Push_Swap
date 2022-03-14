# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 19:04:13 by zihirri           #+#    #+#              #
#    Updated: 2022/03/14 17:44:37 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_B = checker

CC = @gcc 

RM = @rm -rf

CFLAGS = -Wall -Werror -Wextra 

FILES = ./push_swap_utils/ft_atoi.c \
		./push_swap_utils/opA.c \
		./push_swap_utils/opB.c \
		./push_swap_utils/operation.c \
		./push_swap_utils/util.c \
		./push_swap_utils/algo1.c \
		./push_swap_utils/utils.c \
		./push_swap_utils/ft_lstsize.c \
		./push_swap_utils/algo2.c \
		./push_swap_utils/sort_big.c \
		./push_swap_utils/push_pop.c \
		push_swap.c
		
FILES_B = ./checker_utils/checker_utils_bonus.c \
			./checker_utils/get_next_line_bonus.c \
			./checker_utils/opA_bonus.c \
			./checker_utils/opB_bonus.c \
			./checker_utils/operation_bonus.c \
			./checker_utils/push_pop_bonus.c \
			./push_swap_utils/ft_atoi.c \
			./push_swap_utils/util.c \
			./checker_utils/opX_bonus.c \
			checker_bonus.c


# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m


all : $(NAME)

$(NAME) : $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME) 
	@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"

bonus : $(NAME_B)

$(NAME_B) : $(FILES_B)
	$(CC) $(CFLAGS) $(FILES_B) -o $(NAME_B)
	@echo "$(C_L_BLUE)[BONUS CREATED!]$(C_RES)"
	

clean:
	${RM} push_swap.o checker.o
	@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"
	

fclean: clean
	${RM} push_swap checker
	@echo "$(C_RED)[PROJECT.A REMOVED!]$(C_RES)"

re: fclean all