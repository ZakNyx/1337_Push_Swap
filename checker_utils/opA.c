/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opA.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:50:02 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/13 21:08:46 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checker_sa(t_list **elem)
{
	ft_sx(*elem);
	return (0);
}

int	checker_ra(t_list **elem)
{
	ft_rx(elem);
	return (0);
}

int	checker_rra(t_list **elem)
{
	ft_rrx(elem);
	return (0);
}

int	checker_pa(t_list **stack1, t_list **stack2, int elem)
{
	push(stack1, elem);
	ft_pop(stack2);
	return (0);
}
