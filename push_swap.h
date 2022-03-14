/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:48:17 by zihirri           #+#    #+#             */
/*   Updated: 2022/03/14 17:46:09 by zihirri          ###   ########.fr       */
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

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}	t_list;

/*  Operations  */
void	ft_sx(t_list *stack);
void	sa(t_list **elem);
void	sb(t_list **elem);
int		ss(t_list **elem, t_list **elem2);
void	ft_rx(t_list **stack);
void	ra(t_list **elem);
void	rb(t_list **elem);
void	ft_rrx(t_list **stack);
void	rra(t_list **elem);
void	rrb(t_list **elem);
int		rr(t_list **elem, t_list **elem2);
int		rrr(t_list **elem, t_list **elem2);
t_list	*new_node(int nb);
int		push(t_list **stack, int elem);
t_list	*ft_pop(t_list **stack);
void	pa(t_list **stack1, t_list **stack2, int elem);
void	pb(t_list **stack1, t_list **stack2, int elem);
/*      Checker       */
int		ft_isdigit(char c);
void	ft_digit(int ac, char **av);
void	ft_isdouble(char **av);
void	error(void);
/*	Utils	*/
int		ft_atoi(const char *str);
void	sort_2(t_list **elem);
void	sort_3(t_list **lst);
void	sort_5(t_list **stack, t_list **stack2);
int		find_min(t_list *stack);
int		find_max(t_list *stack);
int		ft_lstsize(t_list *stack);
void	tab(t_list **stack);
void	complex_sort(t_list **stack1, t_list **stack2, int size, int chunk);
int		is_sorted(t_list **stack);
int		checker(char *str);
/*	Checker Utils	*/
int		is_sorted(t_list **stack);
int		ft_strcmp(char *s1, char *s2);
char	*get_next_line(int fd);
int		errors(char **line, t_list **stack1, t_list **stack2);
int		execute_operations(char *line, t_list **stack1, t_list **stack2);
void	free_stuff(t_list **stack);
void	ft_strdel(char **as);
int		checker_sa(t_list **elem);
int		checker_ra(t_list **elem);
int		checker_rra(t_list **elem);
int		checker_pa(t_list **stack1, t_list **stack2);
int		checker_sb(t_list **elem);
int		checker_rb(t_list **elem);
int		checker_rrb(t_list **elem);
int		checker_pb(t_list **stack1, t_list **stack2);

#endif
