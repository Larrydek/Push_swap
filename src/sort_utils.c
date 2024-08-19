/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 04:16:47 by jde-clee          #+#    #+#             */
/*   Updated: 2024/08/19 04:17:32 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_order(t_list **stack_a)
{
	t_list	*copy_stack;

	if (!stack_a || !*stack_a)
		return (0);
	normalizer(stack_a);
	copy_stack = *stack_a;
	while (copy_stack && copy_stack->next)
	{
		if (copy_stack->index > copy_stack->next->index)
			return (0);
		copy_stack = copy_stack->next;
	}
	return (1);
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
	min_index = get_index(stack_a, min);
	lst_size = ft_lstsize(original_stack);
	while (i < lst_size)
	{
		while (min_index > 0)
		{
			(*stack_a) = (*stack_a)->next;
			min_index--;
		}
		(*stack_a)->index = i++;
		(*stack_a) = original_stack;
		min = next_min_than(stack_a, min);
		min_index = get_index(stack_a, min);
		if (min_index == -1)
			break ;
	}
}

int	next_min_than(t_list **stack_a, int min)
{
	t_list	*copy_stack;
	int		num;

	if (!stack_a || !*stack_a)
		return (-1);
	copy_stack = *stack_a;
	num = INT_MAX;
	while ((copy_stack != NULL))
	{
		if ((num > *(int *)copy_stack->content)
			&& (*(int *)copy_stack->content > min))
			num = *(int *)copy_stack->content;
		copy_stack = copy_stack->next;
	}
	return (num);
}

int	ft_is_in(t_list **stack, int num)
{
	t_list	*copy_stack;

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

void	shortest_rotate(t_list **stack_b, int max_num)
{
	if (get_index_index(stack_b, max_num) <= ft_lstsize(*stack_b) / 2)
		rb(stack_b);
	else
		rrb(stack_b);
}
