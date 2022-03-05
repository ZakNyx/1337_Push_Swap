#include "../push_swap.h"

void	ft_sx(t_list *stack)
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

	if(!(*stack)->next)
		return ;
	temp = *stack;
	lst = *stack;
	while(temp->next)
	{
		if(!temp->next->next)
			lst = temp;
		temp = temp->next;
	}
	fst = temp;
	fst->next = *stack;
	lst->next = NULL;
	*stack = fst;
}

t_list *new_node(int nb)
{
	t_list *node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (0);
	node->num = nb;
	node->next = 0;
	return (node);
}

int push(t_list **stack, int elem)
{
	t_list *new;

	if (!stack)
		return (0);
	if (!*stack)
	{
		if (!(*stack = new_node(elem)))
			return (0);
		return (1);
	}
	if (!(new = new_node(elem)))
		return (0);
	new->next = *stack;
	*stack = new;
	return (1);
}

t_list *pop(t_list **stack)
{
	t_list *node;

	node = 0;
	if (!stack || !*stack)
		return (0);
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	return (node);
}
