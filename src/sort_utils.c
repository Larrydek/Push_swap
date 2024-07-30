#include "../inc/push_swap.h"


int		check_order(t_list **stack_a)
{
	t_list	*copy_stack;

	if (!stack_a || !*stack_a)
		return 0;
	copy_stack = *stack_a;
	while(copy_stack && copy_stack->next)
	{
		if (copy_stack->index > copy_stack->next->index)
			return (0);
		copy_stack = copy_stack->next;
	}
	return (1);
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
	//printf("min: %i\n", min);
	min_index = get_index(stack_a, min);
	//printf("min_index: %i\n", min_index);
	lst_size = ft_lstsize(original_stack);

	while (i < lst_size)
	{
		while (min_index > 0)
		{
			(*stack_a) = (*stack_a)->next;
			min_index--;
		}
		(*stack_a)->index = i;
		//printf("i: %i\n", i);
		i++;
		(*stack_a) = original_stack;
		min = next_min_than(stack_a, min);
		//printf("min: %i\n", min);
		min_index = get_index(stack_a, min);
		//printf("min_index: %i\n", min_index);
		if (min_index == -1)
			break;
	}
}

void	chunking(t_list **stack_a, t_list **stack_b)
{
	int	lstsize;
	int key_nbr;
	int	num_chunks;
	int i;
	int counter;

	lstsize = ft_lstsize(*stack_a);
	num_chunks = 4;
	key_nbr = lstsize / num_chunks;
	i = 1;
	counter = 0;

	while ((key_nbr * i) <= lstsize)
	{
		if ((*stack_a)->index <= (key_nbr * i))
		{
			pb(stack_a, stack_b);
			counter++;
		}
		rra(stack_a);
		if (counter == (key_nbr * i))
			i++;
	}
}

int		ft_is_in(t_list **stack, int num)
{
	t_list *copy_stack;

	copy_stack = *stack;

	if (!stack)
		return (-1);
	while (copy_stack != NULL)
	{
		if (copy_stack->index == num)
			return (1);
		copy_stack = copy_stack->next;
	}
	return (0);
}
