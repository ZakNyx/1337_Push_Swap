/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:57:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/11 21:01:03 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(int ac, t_list **stack1, t_list **stack2)
{
	if (ac == 3)
		sort_2(stack1);
	else if (ac == 4)
		sort_3(stack1);
	else if (ac == 6 || ac == 5)
		sort_5(stack1, stack2);
	else if (ac < 500)
	{
		tab(stack1);
		complex_sort(stack1, stack2, ft_lstsize(*stack1), 5);
	}
	else if (ac >= 500)
	{
		tab(stack1);
		complex_sort(stack1, stack2, ft_lstsize(*stack1), 11);
	}
}

int	is_sorted(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int main(int ac, char **av)
{
    t_list *stack1;
	t_list *stack2;
    int c;

	if(ac > 2)
	{
		c = ac - 1;
		ft_digit(ac, av);
		while (c > 0)
		{
			// if (is_sorted(&stack1) == 1)
			// 	exit(1);
			if (ft_isdouble(ac, av) == 0 )
				error();
			else
			{
				push(&stack1, ft_atoi(av[c]));
			}
			c--;
		}
		if (is_sorted(&stack1) == 1)
			exit(1);
		sort(ac, &stack1, &stack2);
		system("leaks push_swap");
	}
}
