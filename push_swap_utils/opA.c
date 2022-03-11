/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opA.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:50:02 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/11 19:49:58 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sa(t_list **elem)
{
    ft_sx(*elem);
    write(1, "sa\n", 3);
}

void    ra(t_list **elem)
{
    ft_rx(elem);
    write(1, "ra\n", 3);
}

void    rra(t_list **elem)
{
    ft_rrx(elem);
    write(1, "rra\n", 4);
}

void    pa(t_list **stack1, t_list **stack2, int elem)
{
    push(stack1, elem);
    ft_pop(stack2);
    write(1, "pa\n", 3);
}