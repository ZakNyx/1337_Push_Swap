/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:48:17 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/04 17:34:12 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>

typedef struct  s_list
{
    int	num;
    struct s_list *next;
}               t_list;

        /*  Operations  */
void	ft_sx(t_list *stack);
void	ft_rx(t_list **stack);
void	ft_rrx(t_list **stack);
t_list *new_node(int nb);
int     push(t_list **stack, int elem);
t_list  *pop(t_list **stack);
int	ft_isdigit(char c);


        /*	Utils	*/
int     ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	error(void);

#endif
