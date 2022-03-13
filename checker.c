/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:21:49 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/13 23:04:59 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}

void	resultuwu(t_list **stack1, t_list **stack2)
{
	if ((is_sorted(stack1)) && !(*stack2))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if (*stack1)
		free_stuff(stack1);
	if (*stack2)
		free_stuff(stack2);
}

void	check_arg1(int ac, char **av)
{	
	if (ac == 2)
	{
		if (ft_isdigit(*av[1]) == 0)
			error();
		ft_atoi(av[1]);
	}
	ft_digit(ac, av);
	ft_isdouble(av);
}

int	main(int ac, char **av)
{
	t_list	*stack1;
	t_list	*stack2;
	char	*line;
	int		c;

	check_arg1(ac, av);
	stack2 = NULL;
	if (ac > 2)
	{
		c = ac - 1;
		while (c > 0)
		{
			push(&stack1, ft_atoi(av[c]));
			c--;
		}
		line = get_next_line(0);
		while (line != NULL)
		{
			if (execute_operations(line, &stack1, &stack2))
				return (errors(&line, &stack1, &stack2));
			ft_strdel(&line);
			line = get_next_line(0);
		}
		resultuwu(&stack1, &stack2);
	}
}
