/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:58:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/08 23:13:57 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort_100(t_list **stack1, t_list **stack2)
{
    int fst;
    int scnd;
    int index;
    t_list *temp;
    
    index = 0;
    
    temp = *stack1;
    while (temp)
    {
        if (temp->num >= 0 && temp->num <= 19)
            {
                fst = index;
                break ;           
            }
        temp = temp->next;
        index++;
    }   
    while(temp)
    {
        if (temp->num >= 0 && temp->num <= 19)
            scnd = index;
        temp = temp->next;
        index++;
    }
    printf("%d  %d", fst, scnd);
}