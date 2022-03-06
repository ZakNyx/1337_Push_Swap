/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:57:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/06 19:45:09 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *elem1;
	t_list *elem2;
    int c;

	if(ac > 2)
	{
		c = ac - 1;
		ft_digit(ac, av);
		while (c > 0)
		{
			if (ft_isdouble(ac, av) == 0 )
				error();
			else
				push(&elem1, ft_atoi(av[c]));
			c--;
		}
			// sort_2(ac, av, &elem1);
			//sort_3(&elem1);
			sort_5(ac, av, &elem1, &elem2);
			while (elem1)
			{
				printf("stack 1 = %d\n", elem1->num);
				elem1 = elem1->next;
			}
	}
}
