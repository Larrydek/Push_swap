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

/* 
case1 : [2,1,3]->sa->[1,2,3].

case2 : [3,2,1]->sa->[2,3,1]->rra->[1,2,3].

case3: [3,1,2]->ra->[1,2,3].

case4 : [1,3,2]->sa->[3,1,2]->ra->[1,2,3].

case5 : [2,3,1]->rra->[1,2,3].

 */

void	sort_case_2(t_list **stack_a)
{
	int		first;
	int		second;

	first = *(int *)(*stack_a)->content;
	second = *(int *)(*stack_a)->next->content;

	if (first > second)
		sa(stack_a);
}

void	sort_case_3(t_list **stack_a)
{
	int		first;
	int		second;
	int		third;

	first = *(int *)(*stack_a)->content;
	second = *(int *)(*stack_a)->next->content;
	third = *(int *)(*stack_a)->next->next->content;

	if (first > second && second < third && first < third)
		sa(stack_a);
	else if (first > second && second > third && first > third)
	{
		sa(stack_a);
		rra(stack_a);	
	}
	else if (first > second && second < third && first > third)
		ra(stack_a);
	else if (first < second && second > third && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first < second && second > third && first > third)
	{
		rra(stack_a);
	}
	printf("SORT_CASE_3: \n");
	print_list(stack_a);
}

void	sort_case_5(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		index;

	min = get_min(stack_a);
	printf("min: %i\n", min);
	index = get_index(stack_a, min);
	printf("index min: %i\n", index);

	while (*(int *)(*stack_a)->content != min)
	{
		if (index >= 3)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pa(stack_a, stack_b);
	printf("sorting 1.....\n");
	print_list(stack_a);
	min = get_min(stack_a);
	printf("min: %i\n", min);
	index = get_index(stack_a, min);
	printf("index min: %i\n", index);
	while(*(int *)(*stack_a)->content != min)
	{
		if (index >= 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pa(stack_a, stack_b);
	printf("sorting 2.....\n");
	print_list(stack_a);
	sort_case_3(stack_a);
	printf("STACK_B: \n");
	print_list(stack_b);
	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
}
