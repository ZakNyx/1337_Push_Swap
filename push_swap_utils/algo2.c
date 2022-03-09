/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:17:49 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/08 23:08:17 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void bubblesort(int *a, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if(a[j] > a[j + 1])
			{
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;	
			}
			j++;
		}
		i++;
	}
}

void	index_stack(int *a, t_list **stack1, int size)
{
	int	i;
	t_list *stack;

	stack = *stack1;
	while (stack)
	{
		i = 0;
		while(i < size)
		{
			if (a[i] == (stack)->num)
			{
				(stack)->num = i;
				break ;
			}
			i++;
		}
		// printf("num = %d\n",(*stack)->num);
		(stack) = (stack)->next;
	}
			// while(*stack1)
			// {
			// 	printf("%d\n", (*stack1)->num);
			// 	(*stack1) = (*stack1)->next;
			// }
}

void	tab(t_list **stack, int ac)
{
	int		*arr;
	int		i;
	t_list	*temp;

	i = 0;
	arr = (int *)malloc((ft_lstsize(*stack)) * sizeof(int));
	temp = *stack;
	while (temp)
	{
		arr[i] = temp->num;
		temp = temp->next;
		i++;
	}
	bubblesort(arr, ft_lstsize(*stack));
	// i = 0;
    // for (i=0; i < ft_lstsize(*stack); i++)
    //     printf("%d ", arr[i]);
	index_stack(arr, stack, ft_lstsize(*stack));
			
}