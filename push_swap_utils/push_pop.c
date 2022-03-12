/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:59:17 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/12 18:59:59 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*new_node(int nb)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->num = nb;
	node->next = 0;
	return (node);
}

int	push(t_list **stack, int elem)
{
	t_list	*new;

	if (!stack)
		return (0);
	if (!*stack)
	{
		*stack = new_node(elem);
		if (!(*stack))
			return (0);
		return (1);
	}
	new = new_node(elem);
	if (!new)
		return (0);
	new->next = *stack;
	*stack = new;
	return (1);
}

t_list	*ft_pop(t_list **stack)
{
	t_list	*node;

	node = 0;
	if (!stack || !*stack)
		return (0);
	node = *stack;
	free(node);
	*stack = (*stack)->next;
	node->next = NULL;
	return (node);
}
