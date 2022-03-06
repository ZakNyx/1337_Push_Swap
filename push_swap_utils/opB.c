/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opB.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:04:03 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/06 17:31:24 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sb(t_list **elem)
{
    ft_sx(*elem);
    write(1, "sb\n", 3);
}

void    rb(t_list **elem)
{
    ft_rx(elem);
    write(1, "rb\n", 3);
}

void    rrb(t_list **elem)
{
    ft_rrx(elem);
    write(1, "rrb\n", 4);
}

// void    pb(t_list **stack1, t_list *stack2, int elem)
// {
//     push(stack1, elem);
//     ft_pop(stack2);
//     write(1, "pb\n", 3);
// }