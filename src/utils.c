/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:48 by jde-clee          #+#    #+#             */
/*   Updated: 2024/08/21 11:29:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	print_list_indexes(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		ft_printf("[%i]", tmp->index);
		tmp = tmp->next;
	}
	ft_printf("\n");
}

int	get_min(t_list **stack_a)
{
	t_list	*copy_stack;
	int		num;

	if (!stack_a || !*stack_a)
		return (-1);
	copy_stack = *stack_a;
	num = *(int *)(copy_stack)->content;
	while ((copy_stack != NULL))
	{
		if (num > *(int *)(copy_stack)->content)
			num = *(int *)(copy_stack)->content;
		copy_stack = copy_stack->next;
	}
	return (num);
}

int	get_max(t_list **stack_a)
{
	t_list	*copy_stack;
	int		num;

	if (!stack_a || !*stack_a)
		return (-1);
	copy_stack = *stack_a;
	num = copy_stack->index;
	while ((copy_stack != NULL))
	{
		if (num < copy_stack->index)
			num = copy_stack->index;
		copy_stack = copy_stack->next;
	}
	return (num);
}

int	get_index(t_list **stack_a, int num)
{
	t_list	*copy_stack;	
	int		index;

	index = 0;
	if (!stack_a || !*stack_a)
		return (-1);
	copy_stack = *stack_a;
	while (copy_stack != NULL)
	{
		if (*(int *)copy_stack->content == num)
			return (index);
		else
			index++;
		copy_stack = copy_stack->next;
	}
	return (-1);
}

int	get_index_index(t_list **stack_a, int num)
{
	t_list	*copy_stack;	
	int		index;

	index = 0;
	if (!stack_a || !*stack_a)
		return (-1);
	copy_stack = *stack_a;
	while (copy_stack != NULL)
	{
		if (copy_stack->index == num)
			return (index);
		else
			index++;
		copy_stack = copy_stack->next;
	}
	return (-1);
}
