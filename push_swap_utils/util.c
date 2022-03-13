/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:26:51 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/13 21:14:46 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

void	error(void)
{
	write(2, "Error\n", 6);
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
		if ((av[i][j] >= 48 && av[i][j] <= 57)
			|| (av[i][j] == '-' || av[i][j] == '+'))
		{
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (ft_isdigit(av[i][j + 1]) == 0)
					error();
			}
			i--;
		}
		else
			error();
	}
}

void	ft_isdouble(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				error();
			j++;
		}
		i++;
	}
}
