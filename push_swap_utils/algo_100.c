/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:58:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/09 18:24:19 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void salam(t_list **stack1, t_list **stack2, int fst, int scnd_ind)
{
	int scnd;
	int size;
	t_list *tmp;

	size = ft_lstsize(*stack1);
	scnd = 100 - scnd_ind;
	tmp = (*stack1);
	while (tmp)
	{
		printf("fst = %d \n", fst);
		printf("scnd = %d \n", scnd);
		if (fst > scnd)
		{
			while (scnd > 0)
			{
				rra(stack1);
				scnd--;
			}
			break ;
			// fst++;
		}
		else if (fst < scnd)
		{
			while (fst > 0)
			{
				ra(stack1);
				fst--;
			}
			break ;
			// scnd--;
		}
		tmp = tmp->next;
		// pb(stack1, stack2, tmp->num);
		// tmp = tmp->next;
	}
		printf("stack1 = %d ", tmp->num);
		push(stack2, tmp->num);
		ft_pop(&tmp);
		write(1, "pb\n", 3);
		printf("%d\n", (*stack2)->num);

}

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
    printf("%d  %d\n", fst, scnd);
    salam(stack1, stack2, fst, scnd);
	 //printf("%d\n", index );
}