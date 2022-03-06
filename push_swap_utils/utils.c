/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:07:46 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/06 15:13:42 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(t_list *stack)
{
    int	min;
    int	index;
    int	i;

	i = 0;
    index = 0;
    min = stack->num;
    while (stack)
    {
        if (stack->num < min)
        {
            min = stack->num;
            index = i;
        }
        stack = stack->next;
        i++;
    }
    return (min);
}

int	find_max(t_list *stack)
{
    int	max;
    int	index;
    int	i;

	i = 0;
    index = 0;
    max = stack->num;
    while (stack)
    {
        if (stack->num > max)
        {
            max = stack->num;
            index = i;
        }
        stack = stack->next;
        i++;
    }
    return (max);
}