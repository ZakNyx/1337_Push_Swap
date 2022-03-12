/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:08 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/12 18:51:44 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_list **lst)
{
	if ((*lst)->num > (*lst)->next->num)
		sa(lst);
}

static void	sort3_helper(t_list **lst)
{
	if (((*lst)->num < (*lst)->next->num)
		&& ((*lst)->next->num > (*lst)->next->next->num)
		&& ((*lst)->num > (*lst)->next->next->num))
		rra(lst);
	else if (((*lst)->num < (*lst)->next->num)
		&& ((*lst)->next->num > (*lst)->next->next->num)
		&& ((*lst)->num < (*lst)->next->next->num))
	{
		rra(lst);
		sa(lst);
	}
}

void	sort_3(t_list **lst)
{
	if (((*lst)->num > (*lst)->next->num)
		&& ((*lst)->next->num > (*lst)->next->next->num))
	{
		sa(lst);
		rra(lst);
	}
	else if (((*lst)->num > (*lst)->next->num)
		&& ((*lst)->next->num < (*lst)->next->next->num)
		&& ((*lst)->num > (*lst)->next->next->num))
	{
		rra(lst);
		rra(lst);
	}
	else if (((*lst)->num > (*lst)->next->num)
		&& ((*lst)->next->num < (*lst)->next->next->num)
		&& ((*lst)->num < (*lst)->next->next->num))
	{
		sa(lst);
	}
	sort3_helper(lst);
}

void	sort_5_norm(t_list **stack1, t_list **stack2, int min, int size)
{
	if (min >= (size / 2))
	{
		while (min <= (size - 1))
		{
			rra(stack1);
			min++;
		}
	}
	else
	{
		while (min != 0)
		{
			ra(stack1);
			min--;
		}
	}
	pb(stack1, stack2, (*stack1)->num);
}

void	sort_5(t_list **stack1, t_list **stack2)
{
	int	min;
	int	i;
	int	size;
	int	n;

	size = ft_lstsize(*stack1);
	i = 0;
	n = size;
	while (i < n - 3)
	{
		min = find_min(*stack1);
		sort_5_norm(stack1, stack2, min, size);
		size--;
		i++;
	}
	sort_3(stack1);
	while (n > 3)
	{
		pa(stack1, stack2, (*stack2)->num);
		n--;
	}
}
