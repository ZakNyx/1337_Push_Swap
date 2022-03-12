/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:06:52 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/12 19:03:52 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_first(t_list **stack1, int min, int max)
{
	t_list	*tmp;
	int		index;
	int		first;

	tmp = *stack1;
	first = -1;
	index = 0;
	while (tmp)
	{
		if (tmp->num >= min && tmp->num < (min + max))
		{
			first = index;
			break ;
		}
		index++;
		tmp = tmp->next;
	}
	return (first);
}

void	swap(t_list **stack1, t_list **stack2, int index, int *size)
{
	if (index > *size / 2)
	{
		while (index < *size)
		{
			rra(stack1);
			index++;
		}
	}
	if (index <= *size / 2)
	{
		while (index > 0)
		{
			ra(stack1);
			index--;
		}
	}
	pb(stack1, stack2, (*stack1)->num);
}

void	push_back(t_list **stack1, t_list **stack2, int *size)
{
	t_list	*tmp;
	int		max;

	tmp = (*stack2);
	max = find_max(*stack2);
	if (max > *size / 2)
	{
		while (max < *size)
		{
			rrb(stack2);
			max++;
		}
	}
	else if (max <= *size / 2)
	{
		while (max > 0)
		{
			rb(stack2);
			max--;
		}
	}
	pa(stack1, stack2, (*stack2)->num);
}

void	complex_sort(t_list **stack1, t_list **stack2, int size, int chunk)
{
	int		min;
	int		max;
	int		i;

	min = 0;
	max = size / chunk;
	while (*stack1)
	{
		i = find_first(stack1, min, max);
		if (i == -1)
		{
			min = min + max;
			continue ;
		}
		swap(stack1, stack2, i, &size);
	}
	while (*stack2)
	{
		push_back(stack1, stack2, &size);
		size--;
	}
}
