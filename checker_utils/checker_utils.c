/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:19:04 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/13 21:05:47 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	execute_operations(char *line, t_list **stack1, t_list **stack2)
{
	if (!(ft_strcmp(line, "sa")))
		return (checker_sa(stack1));
	if (!(ft_strcmp(line, "sb")))
		return (checker_sb(stack2));
	if (!(ft_strcmp(line, "ss")))
		return (ss(stack1, stack2));
	if (!(ft_strcmp(line, "pa")))
		return (checker_pa(stack1, stack2, (*stack2)->num));
	if (!(ft_strcmp(line, "pb")))
		return (checker_pb(stack1, stack2, (*stack1)->num));
	if (!(ft_strcmp(line, "ra")))
		return (checker_ra(stack1));
	if (!(ft_strcmp(line, "rb")))
		return (checker_rb(stack2));
	if (!(ft_strcmp(line, "rr")))
		return (rr(stack1, stack2));
	if (!(ft_strcmp(line, "rra")))
		return (checker_rra(stack1));
	if (!(ft_strcmp(line, "rrb")))
		return (checker_rrb(stack2));
	if (!(ft_strcmp(line, "rrr")))
		return (rrr(stack1, stack2));
	return (1);
}

int	errors(char **line, t_list **stack1, t_list **stack2)
{
	ft_strdel(line);
	if (*stack1)
		free_stuff(stack1);
	if (*stack2)
		free_stuff(stack2);
	write(2, "Error\n", 7);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	is_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	free_stuff(t_list **stack)
{
	t_list	*del;
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		del = tmp;
		tmp = tmp->next;
		free(del);
	}
	*stack = NULL;
}
