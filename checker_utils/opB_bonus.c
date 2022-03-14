/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opB_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:04:03 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/14 18:00:59 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checker_sb(t_list **elem)
{
	if (*elem)
		ft_sx(*elem);
	return (0);
}

int	checker_rb(t_list **elem)
{
	if (*elem)
		ft_rx(elem);
	return (0);
}

int	checker_rrb(t_list **elem)
{
	if (*elem)
		ft_rrx(elem);
	return (0);
}

int	checker_pb(t_list **stack1, t_list **stack2)
{
	int	elem;

	if (*stack1)
	{
		elem = (*stack1)->num;
		push(stack2, elem);
		ft_pop(stack1);
	}
	return (0);
}
