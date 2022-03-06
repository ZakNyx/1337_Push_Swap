/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:08 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/06 19:43:29 by zihirri          ###   ########.fr       */
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
void	sort_2(int ac, char **av, t_list **elem)
{
	int i;
	
	i = ac - 1;
	if(ac == 3)
	{
		if (ft_atoi(av[i]) < ft_atoi(av[i - 1]))
			sa(elem);
	}
}

static void sort3_helper(t_list **lst)
{
    if (((*lst)->num < (*lst)->next->num)
        && ((*lst)->next->num > (*lst)->next->next->num)
        && ((*lst)->num > (*lst)->next->next->num))
    {
        write(1, "rra\n", 4);
        rra(lst);
    }
    else if (((*lst)->num < (*lst)->next->num)
        && ((*lst)->next->num > (*lst)->next->next->num)
        && ((*lst)->num < (*lst)->next->next->num))
    {
        write(1, "rra\n", 4);
        rra(lst);
        write(1, "sa\n", 3);
        sa(lst);
    }
}

void    sort_3(t_list **lst)
{
    if (((*lst)->num > (*lst)->next->num)
        &&((*lst)->next->num > (*lst)->next->next->num))
    {
        write(1, "sa\n", 3);
        sa(lst);
        write(1, "rra\n", 4);
        rra(lst);
    }
    else if (((*lst)->num > (*lst)->next->num)
        && ((*lst)->next->num < (*lst)->next->next->num)
        && ((*lst)->num > (*lst)->next->next->num))
    {
        write(1, "rra\n", 4);
        write(1, "rra\n", 4);
        rra(lst);
        rra(lst);
    }
    else if (((*lst)->num > (*lst)->next->num)
        && ((*lst)->next->num < (*lst)->next->next->num)
        && ((*lst)->num < (*lst)->next->next->num))
    {
        write(1, "sa\n", 3);
        sa(lst);
    }
    sort3_helper(lst);
}

void	sort_5(int ac, char **av, t_list **stack, t_list **stack2)
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
            push(stack2, (*stack)->num);
			ft_pop(stack);
			write(1, "pb\n", 3);
			i++;
		}
		sort_3(stack);	
		// push(stack, (*stack2)->num);
		// ft_pop(stack2);
		// write(1, "pa\n", 3);
        pa(stack, stack2, (*stack2)->num);
        pa(stack, stack2, (*stack2)->num);
			// while (*stack2)
			// {
			// 	printf("stack b %d\n", (*stack2)->num);
			// 	*stack2 = (*stack2)->next;
			// }
}
