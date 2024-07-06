/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:48 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/06 20:57:00 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	t_stack *tmp;

	tmp = stack;
	if (!stack)
		return (NULL);
	printf("tmp memory direc: %p\n", (void *)tmp);
	while (tmp && tmp->next != NULL)
	{
		tmp = tmp->next;
		printf("tmp direc: %p\n", (void *)tmp);
	}
	return (tmp);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack *tmp;
	if (new)
	{
		tmp = ft_stacklast(*stack);
		if (!tmp)
			*stack = new;
		else
			tmp->next = new;
	}
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