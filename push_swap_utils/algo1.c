/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:08 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/07 16:54:31 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// int	min(t_list *stack)
// {	
// 	int min;

// 	min = 0;
// 	while(stack->num)
// 	{
// 		if 
// 	}
// }
void	sort_2(t_list **lst)
{
		if ((*lst)->num > (*lst)->next->num)
			sa(lst);
}

static void sort3_helper(t_list **lst)
{
    if (((*lst)->num < (*lst)->next->num)
        && ((*lst)->next->num > (*lst)->next->next->num)
        && ((*lst)->num > (*lst)->next->next->num))
    {
        rra(lst);
    }
    else if (((*lst)->num < (*lst)->next->num)
        && ((*lst)->next->num > (*lst)->next->next->num)
        && ((*lst)->num < (*lst)->next->next->num))
    {
        rra(lst);
        sa(lst);
    }
}

void    sort_3(t_list **lst)
{
    if (((*lst)->num > (*lst)->next->num)
        &&((*lst)->next->num > (*lst)->next->next->num))
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

void	sort_5(t_list **stack, t_list **stack2)
{
	int	i;
	int m;

	i = 0;

		while (i < 2)
		{
			m = find_min(*stack);
            if (m >= ft_lstsize(*stack) / 2)
            {
                while (m <= ft_lstsize(*stack) - 1)
                {
                    rra(stack);
                    m++;
                }
            }
            else
            {
                while (m != 0)
                {
                    ra(stack);
                    m--;
                }
            }
            pb(stack, stack2, (*stack)->num);
			i++;
		}
		sort_3(stack);	
        pa(stack, stack2, (*stack2)->num);
        pa(stack, stack2, (*stack2)->num);
			// while (*stack2)
			// {
			// 	printf("stack b %d\n", (*stack2)->num);
			// 	*stack2 = (*stack2)->next;
			// }
}
