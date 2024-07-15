/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:43 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/13 19:22:43 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* 
case1 : [2,1,3]->sa->[1,2,3].

case2 : [3,2,1]->sa->[2,3,1]->rra->[1,2,3].

case3: [3,1,2]->ra->[1,2,3].

case4 : [1,3,2]->sa->[3,1,2]->ra->[1,2,3].

case5 : [2,3,1]->rra->[1,2,3].

Tengo que hacer sort 2 y sort 5 también.
 */

void	sort_case_2(t_list **stack_a)
{
	t_list *copy_stack;
	int		*first;
	int		*second;

	copy_stack = (*stack_a);
	first = *(int *)copy_stack->content;
	second = *(int *)copy_stack->next->content;

	if (first > second)
		ft_swap(copy_stack);
}

void	sort_case_3(t_list **stack_a)
{
	t_list *copy_stack;
	int		*first;
	int		*second;
	int		*third;

	copy_stack = (*stack_a);
	first = *(int *)copy_stack->content;
	second = *(int *)copy_stack->next->content;
	third = *(int *)copy_stack->next->next->content;

	if (first > second && second < third && first < third)
		ft_swap(copy_stack);
	else if (first > second && second > third && first > third)
	{
		ft_swap(copy_stack);
		ft_reverse_rotate(copy_stack);	
	}
	else if (first > second && second < third && first > third)
		ft_rotate(copy_stack);
	else if (first < second && second > third && first < third)
	{
		ft_swap(copy_stack);
		ft_rotate(copy_stack);
	}
	else if (first < second && second > third && first > third)
	{
		ft_reverse_rotate(copy_stack);
	}
}

void	sort_case_5(t_list **stack_a)
{
	/* 
	
	 */
}