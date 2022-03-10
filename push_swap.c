/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:57:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/10 19:05:56 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(int ac, t_list **stack1, t_list **stack2)
{
	if (ac == 3)
		sort_2(stack1);
	else if (ac == 4)
		sort_3(stack1);
	else if (ac > 4)
		sort_5(stack1, stack2);
}

int main(int ac, char **av)
{
    t_list *stack1;
	t_list *stack2;
    int c;
	int i;

	i = 0;
	if(ac > 2)
	{
		c = ac - 1;
		ft_digit(ac, av);
		while (c > 0)
		{
			if (ft_isdouble(ac, av) == 0 )
				error();
			else
				push(&stack1, ft_atoi(av[c]));
			c--;
		}
		tab(&stack1, ac);
		sort_100(&stack1, &stack2);
		//complex_sort(&stack1, &stack2, 100);

		// 	i++;
		// }
		//sort(ac, &stack1, &stack2);
		
		// while(stack2)
		// {
		// 	printf("%d\n", stack2->num);
		// 	stack2 = stack2->next;
		// }
	}
}
