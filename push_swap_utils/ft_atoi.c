/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:38:41 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/12 21:47:38 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_helper(const char *str, long result, int n)
{
	if (!(str[n] >= '0' && str[n] <= '9') && str[n] != '\0')
		error();
	if (result > 2147483647 || result <= -2147483648)
		error();
}

static long	ft_check(const char *str, int i, int n)
{
	long	result;
	long	precedes;

	result = 0;
	precedes = 0;
	while (str[n] >= '0' && str[n] <= '9')
	{
		precedes = 10 * precedes + (str[n] - '0');
		if (i == -1)
		{
			if ((precedes / 10) != result)
				error();
		}
		if (i == 1)
		{
			if ((precedes / 10) != result)
				error();
		}
		result = 10 * result + (str[n] - '0');
		n++;
	}
	result = result * i;
	ft_helper(str, result, n);
	return (result);
}

int	ft_atoi(const char *str)
{
	long	result;
	long	precedes;
	int		sign;
	int		n;

	result = 0;
	precedes = 0;
	sign = 1;
	n = 0;
	while (str[n] == '\f' || str[n] == '\n' || str[n] == 32
		|| str[n] == '\r' || str[n] == '\v' || str[n] == '\t')
		n++;
	if (str[n] == '-')
	{
		sign *= -1;
		n++;
	}
	else if (str[n] == '+')
		n++;
	result = ft_check(str, sign, n);
	return ((int)result);
}
