/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:08 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/05 20:03:23 by zihirri          ###   ########.fr       */
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

void	sort_3(int ac, char **av, t_list **elem)
{
	int i;
	
	i = ac - 1;

	if (ac == 4)
	{
		if (ft_atoi(av[i]) > ft_atoi(av[i - 1]) && ft_atoi(av[i - 1]) < ft_atoi(av[i - 2]) && ft_atoi(av[i]) < ft_atoi(av[i - 2]))
			ra(elem);
		else if (ft_atoi(av[i]) < ft_atoi(av[i - 1]) && ft_atoi(av[i - 1]) > ft_atoi(av[i - 2]) && ft_atoi(av[i]) > ft_atoi(av[i - 2]))
		{
			sa(elem);
			ra(elem);
		}
		else if (ft_atoi(av[i]) > ft_atoi(av[i - 1]) && ft_atoi(av[i - 1]) < ft_atoi(av[i - 2]) && ft_atoi(av[i]) > ft_atoi(av[i - 2]))
			sa(elem);
		else if (ft_atoi(av[i]) < ft_atoi(av[i - 1]) && ft_atoi(av[i - 1]) > ft_atoi(av[i - 2]) && ft_atoi(av[i]) < ft_atoi(av[i - 2]))
			rra(elem);
		else if (ft_atoi(av[i]) < ft_atoi(av[i - 1]) && ft_atoi(av[i - 1]) < ft_atoi(av[i - 2]) && ft_atoi(av[i]) < ft_atoi(av[i - 2]))
		{
			sa(elem);
			rra(elem);
		}
	}
}


