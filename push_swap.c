/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:57:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/04 17:32:42 by zihirri          ###   ########.fr       */
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
void	error(void)
{
	write(2, "Error\n", 7);
	exit(1);
}
void	ft_digit(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = ac - 1;
	while (i > 0)
	{
		if ((av[i][j] >= 48 && av[i][j] <= 57) || (av[i][j] == '-' || av[i][j] == '+'))
		{
			if (av[i][j]== '-' || av[i][j] == '+')
			{
				if(ft_isdigit(av[i][j + 1]) == 0)
					error();
			}
			i--;
		}
		else
			error();
	}
}

int	ft_isdouble(int ac, char **av)
{
	int i;
	int j;
	
	i = ac - 1;
	j = ac - 2;
	while(i > 0)
	{
		while (j > 0)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j--;
		}
		i--;
	}
	return (1);
}

int main(int ac, char **av)
{
    t_list *elem1;
    int c;

    c = ac - 1;
	ft_digit(ac, av);
	while (c > 0)
	{
		if (ft_isdouble(ac, av) == 0 )
		{
			printf("Error\n");
			exit (1);
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