#include "../inc/push_swap.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (stack);
	stack->content = content;
	stack->next = NULL;
	return (stack);
}

t_stack	*ft_stacklast(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	if (*stack)
		ft_stacklast(*stack)->next = new;
	else
		*stack = new;
}

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (!stack || !new)
		return ;
	tmp = *stack;
	*stack = new;
	new->next = tmp;
}

int	ft_stacksize(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}