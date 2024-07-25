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
	ft_printf("SORT_CASE_3: \n");
	print_list(stack_a);
}



void	sort_case_5(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		index;

	min = get_min(stack_a);
	ft_printf("min: %i\n", min);
	index = get_index(stack_a, min);
	ft_printf("index min: %i\n", index);

	while (*(int *)(*stack_a)->content != min)
	{
		if (index >= 3)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pa(stack_a, stack_b);
	ft_printf("sorting 1.....\n");
	print_list(stack_a);
	min = get_min(stack_a);
	ft_printf("min: %i\n", min);
	index = get_index(stack_a, min);
	ft_printf("index min: %i\n", index);
	while(*(int *)(*stack_a)->content != min)
	{
		if (index >= 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pa(stack_a, stack_b);
	ft_printf("sorting 2.....\n");
	print_list(stack_a);
	sort_case_3(stack_a);
	ft_printf("STACK_B: \n");
	print_list(stack_b);
	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
}

void	sort_to_10(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		index;
	int		size_a;
	int		size_b;

	min = get_min(stack_a);
	index = get_index(stack_a, min);
	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);

	if (!(*stack_a) && check_order(stack_a) == -1)
		return ;
	if (check_order(stack_a) == 1 && ft_lstsize(*stack_b) == 0)
	{
		ft_printf("----> ORDENADA\n");
		return ;
	}

	while (*(int *)(*stack_a)->content != min)
	{
		if (index >= size_a / 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pb(stack_a, stack_b);
	//ft_printf("min: %i\n", min);
	//ft_printf("index min: %i\n", index);
	//print_list(stack_a);
	//ft_printf("[Stack_a] --> size: %i\n", size_a);
	//print_list(stack_b);
	//ft_printf("[Stack_b] --> size: %i\n", size_b);
	
	//size_a = ft_lstsize(*stack_a);
	//size_b = ft_lstsize(*stack_b);
	size_a--;
	size_b++;
	//ft_printf("SIZE_A: %i\n", size_a);
	//ft_printf("SIZE_B: %i\n", size_b);
	if (size_a == 0)
	{
		while (size_b-- > 0)
			pa(stack_b, stack_a);
		return ;
	}
	else
		sort_to_10(stack_a, stack_b);
}


void	sort_to_infinite(t_list **stack_a, t_list **stack_b)
{
	int		max_num;
	int		proximity;
	int		swap_flag;

	max_num = ft_lstsize(*stack_b) - 1;
	proximity = get_index_index(stack_b, max_num);
	swap_flag = 0;
	if (check_order(stack_a) == 1 && ft_lstsize(*stack_b) == 0)
	{
		ft_printf("----> ORDENADA\n");
		return ;
	}

	//printf("proximity: %i\n", proximity);
	//printf("max_num: %i\n", max_num);
	while (max_num >= 0)
	{
		if (!ft_is_in(stack_b, max_num))
			max_num--;
		proximity = get_index_index(stack_b, max_num);
		if (proximity < max_num / 2)
			rb(stack_b);
		else
			rrb(stack_b);
		//printf("[%i]\n", (*stack_b)->index);
		if (((*stack_b)->index) == max_num)
		{
			pa(stack_b, stack_a);
			//max_num--;
			//printf("max_num: %i\n", max_num);
			//printf("proximity: %i\n", proximity);
			if (swap_flag == 1)
			{
				sa(stack_a);
				swap_flag = 0;
			}
		}
		if ((*stack_b)->index == (max_num - 1))
		{
			pa(stack_b, stack_a);
			swap_flag = 1;
		}
	}
}
