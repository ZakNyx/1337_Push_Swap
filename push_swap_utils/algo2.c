/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:17:49 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/07 19:47:07 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tab(t_list **stack, int ac)
{
	int *arr;
	int	i;
	int j = 0;

	i = 0;
	arr = (int *)malloc((ft_lstsize(*stack)) * sizeof(int));
	while (*stack)
	{
		arr[i] = (*stack)->num;
		(*stack) = (*stack)->next;
		printf("%d\n", arr[i]);
		i++;
	}
}
void	swap(int *x, int *y)
{
	int	temp;

	*x = *y;
	*y = temp;
}

void	sort_tab(int *arr, int size)
{
	int	i;
	int	j;
	int	swapped;

	i = 0;
	j = 0;
	swapped = 0;
	while (i < size)
	{
		swapped = 0;
		while(j < size - i)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			j++;
		}
		i++;
		if (swapped == 0)
			break ;
	}
}