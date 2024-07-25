/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:48 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/25 06:26:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_strstrlen(char **argv)
{
	int i;

	i = 0;
	if (!argv)
		return (0);
	while (argv[i] != 0)
		i++;
	return (i);
}

void	print_list(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;
	while (tmp)
	{
		ft_printf("[%i]", *(int *)(tmp)->content);
		//ft_printf("stack->content MEMORY dir: %p\n", (void *)tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\n");
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
		copy_stack = copy_stack->next;
	}
	return (num);
}

int		next_min_than(t_list **stack_a, int	min)
{
	t_list *copy_stack;
	int num;

	copy_stack = *stack_a;
	if (!copy_stack)
		return (-1);
	num = INT_MAX;
	while ((copy_stack != NULL))
	{
		if ((num > *(int *)copy_stack->content) && (*(int *)copy_stack->content > min))
			num = *(int *)copy_stack->content;
		//printf("num %i next_min_than ---> ", num);
		//printf("min:%i\n", min);
		copy_stack = copy_stack->next;
	}
	//printf("%i min_greather_than: ", num);
	//printf("min:%i\n", min);
	return (num);
}

int		get_index(t_list **stack_a, int num)
{
	t_list *copy_stack;	
	int index;

	index = 0;
	copy_stack = *stack_a;
	if (!copy_stack)
		return (-1);
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

int		get_index_index(t_list **stack_a, int num)
{
	t_list *copy_stack;	
	int index;

	index = 0;
	copy_stack = *stack_a;
	if (!copy_stack)
		return (-1);
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