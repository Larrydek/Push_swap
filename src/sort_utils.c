#include "../inc/push_swap.h"

/* void	insertion_sort(t_list **stack_a, t_list **stack_b)
{
	while (*stack_a)
	{
		ft_push(stack_a, stack_b);
		ft_printf("pb\n");

		if (*stack_b && (*stack_b)->next && *(int *)((*stack_b)->content) < *(int *)(*stack_b)->next->content)
		{
			ft_swap(stack_b);
			ft_printf("sa\n");
		}

		while(*stack_b)
		{
			ft_push(stack_a, stack_b);
			ft_printf("pa\n");
		}
	}
} */

int		get_index(t_list **stack_a, int num)
{
	int index;

	index = 0;

	while (*stack_a)
	{
		if (*(int *)(*stack_a)->content != num)
		{
			*stack_a = (*stack_a)->next;
			index++;
		}
		return (index);
	}
}

int		get_min(t_list **stack_a)
{
	t_list *copy_stack;
	int num;

	copy_stack = *stack_a;
	if (!copy_stack)
		return (NULL);
	num = *(int *)(copy_stack)->content;
	while (((copy_stack)->next))
	{
		if (num < *(int *)(copy_stack)->content)
			num = *(int *)(copy_stack)->content;
		(copy_stack) = (copy_stack)->next;
	}
	return (num);
}