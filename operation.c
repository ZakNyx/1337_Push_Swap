#include "push_swap.h"

void	ft_px(t_list *stack)
{
	t_list	*n1;
	t_list	*n2;
	int	temp;


	n1 = stack;
	n2 = stack->next;
	if(!n1 || !n2)
		return ;
	temp = n1->num;
	n1->num = n2->num;
	n2->num = temp;
}

void	ft_rx(t_list **stack)
{
	t_list	*fst;
	t_list	*lst;

	if (!(*stack)->next)
		return ;
	fst = (*stack)->next;
	lst = *stack;
	while ((*stack)->next)
		*stack = (*stack)->next;
	(*stack)->next = lst;
	lst->next = NULL;
	*stack = fst;
}

void	ft_rrx(t_list **stack)
{
	t_list	*temp;
	t_list	*fst;
	t_list	*lst;

	if(!(*stk)->next)
		return ;
	temp = *stack;
	lst = *stack;
	while(temp->next)
	{
		if(!tmp->next->next)
			lst = tmp;
		tmp = tmp->next;
	}
	fst = temp;
	fst->next = *stack;
	lst->next = NULL;
	*stack = first
}
