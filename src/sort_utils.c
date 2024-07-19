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

int		check_order(t_list **stack_a)
{
	t_list	*copy_stack;

	copy_stack = *stack_a;
	if (!copy_stack)
		return (-1);
	while(copy_stack && copy_stack->next)
	{
		if (*(int *)(copy_stack)->content > *(int *)(copy_stack)->next->content)
			return (0);
		copy_stack = copy_stack->next;
	}
	return (1);
}

int		get_index(t_list **stack_a, int num)
{
	t_list *copy_stack;	
	int index;

	index = 0;
	copy_stack = *stack_a;
	if (!copy_stack || !num)
		return (-1);
	while (copy_stack != NULL)
	{
		if (*(int *)(copy_stack)->content == num)
			return (index);
		index++;
		copy_stack = (copy_stack)->next;
	}
	return (-1);
}

int		get_min(t_list **stack_a)
{
	t_list *copy_stack;
	int num;

	copy_stack = *stack_a;
	if (!copy_stack)
		return (-1);
	num = *(int *)(copy_stack)->content;
	while ((copy_stack != NULL))
	{
		if (num > *(int *)(copy_stack)->content)
			num = *(int *)(copy_stack)->content;
		(copy_stack) = (copy_stack)->next;
	}
	return (num);
}


void	sort_case_2(t_list **stack_a)
{
	int		first;
	int		second;

	first = *(int *)(*stack_a)->content;
	second = *(int *)(*stack_a)->next->content;

	if (first > second)
		sa(stack_a);
}

int		get_min_greather_than(t_list **stack_a, int	min)
{
	t_list *copy_stack;
	int num;

	copy_stack = *stack_a;
	if (!copy_stack)
		return (-1);
	num = *(int *)copy_stack->content;
	while ((copy_stack != NULL))
	{
		if ((num > *(int *)(copy_stack)->content) && (num > min))
			num = *(int *)(copy_stack)->content;
		printf("%i min_greather_than: ", num);
		printf("min:%i\n", min);
		(copy_stack) = (copy_stack)->next;
		if (num > min)
			break ;
	}
	//printf("%i min_greather_than: ", num);
	//printf("min:%i\n", min);

	return (num);
}


void	normalizer(t_list **stack_a)
{
	int		min;
	int		min_index;
	int		i;
	int		lst_size;
	t_list	*original_stack;

	i = 0;
	original_stack = *stack_a;
	min = get_min(stack_a);
	printf("min: %i\n", min);
	min_index = get_index(stack_a, min);
	printf("min_index: %i\n\n", min_index);
	lst_size = ft_lstsize(original_stack);

	while (i < lst_size)
	{
		while (min_index > 0)
		{
			(*stack_a) = (*stack_a)->next;
			min_index--;
		}
		(*stack_a)->index = i;
		(*stack_a) = original_stack;
		min_index = get_index(stack_a, min);
		printf("min_index: %i\n", min_index);
		min = get_min_greather_than(stack_a, min);
		printf("min: %i\n", min);
		printf("i: %i\n", i);
		i++;
	}
	print_list(&original_stack);
}
