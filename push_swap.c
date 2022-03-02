/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:57:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/02 18:35:31 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}


int main(int ac, char **av)
{
    t_list *elem1;
    int c;

    c = ac - 1;

	while (c > 0)
	{
		if (ft_isdigit(*av[c]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		else
			push(&elem1, ft_atoi(av[c]));
		c--;
		}
		while (elem1)
		{
			printf("%d\n", elem1->num);
			elem1 = elem1->next;
		}
	}