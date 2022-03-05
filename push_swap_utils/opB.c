/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opB.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:04:03 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/05 19:04:27 by zihirri          ###   ########.fr       */
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