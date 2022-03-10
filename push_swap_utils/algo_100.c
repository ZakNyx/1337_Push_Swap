/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:58:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/10 19:56:46 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	salam(t_list **stack1, t_list **stack2, int fst, int scnd_ind)
{
	int scnd;
	int size;
	t_list *tmp;

	size = ft_lstsize(*stack1);
	scnd = size - scnd_ind;
	tmp = (*stack1);
	if (fst > scnd)
	{
		while (scnd > 0)
		{
			rra(&tmp);
			scnd--;
		}
	}
	else if (fst <= scnd)
	{
		while (fst > 0)
		{
			ra(&tmp);
			fst--;
		}
	}
	// tmp = tmp->next;
	push(stack2, tmp->num);
	ft_pop(&tmp);
	write(1, "pb\n", 3);
}

void	sort_100(t_list **stack1, t_list **stack2)
{
	int fst;
	int scnd;
	int index;
	t_list *temp;

	index = 0;
	temp = *stack1;
	while (temp)
	{
		if (temp->num >= 0 && temp->num <= 19)
		{
			fst = index;
			break;
		}
		temp = temp->next;
		index++;
	}
	while (temp)
	{
		if (temp->num >= 0 && temp->num <= 19)
			scnd = index;
		temp = temp->next;
		index++;
	}
	salam(stack1, stack2, fst, scnd);
}