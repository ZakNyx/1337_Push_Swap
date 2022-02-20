/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:45:10 by zihirri           #+#    #+#             */
/*   Updated: 2022/02/20 19:00:45 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	i;

	i = 0;
	if (!del || !lst || !*lst)
		return ;
	while (lst[i])
	{
		del(lst[i]->content);
		free(lst[i]);
		lst[i] = lst[i]->next;
	}
}
