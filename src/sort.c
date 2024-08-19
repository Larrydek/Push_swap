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
}

void	sort_case_5(t_list **stack_a, t_list **stack_b)
{
	int		min;

	min = get_min(stack_a);
	while (*(int *)(*stack_a)->content != min)
	{
		if (get_index(stack_a, min) >= 3)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pa(stack_a, stack_b);
	min = get_min(stack_a);
	while (*(int *)(*stack_a)->content != min)
	{
		if (get_index(stack_a, min) >= 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pa(stack_a, stack_b);
	sort_case_3(stack_a);
	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
}

void	sort_to_10(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		index;
	int		size_a;

	min = get_min(stack_a);
	index = get_index(stack_a, min);
	size_a = ft_lstsize(*stack_a);
	while (*(int *)(*stack_a)->content != min)
	{
		if (index >= size_a / 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pb(stack_a, stack_b);
	size_a--;
	ft_lstsize(*stack_b);
	if (size_a == 0)
	{
		while (ft_lstsize(*stack_b) > 0)
			pa(stack_b, stack_a);
		return ;
	}
	else
		sort_to_10(stack_a, stack_b);
}

void	sort_to_infinite(t_list **stack_a, t_list **stack_b)
{
	int		max_num;
	int		swap_flag;

	max_num = get_max(stack_b);
	swap_flag = 0;
	while (max_num >= 0 && ft_lstsize(*stack_b) > 0)
	{
		if (!ft_is_in(stack_b, max_num))
			max_num--;
		else if (((*stack_b)->index) == (max_num - 1))
		{
			pa(stack_b, stack_a);
			swap_flag = 1;
		}
		else if (((*stack_b)->index) == max_num)
		{
			pa(stack_b, stack_a);
			if (swap_flag == 1)
				sa(stack_a);
			swap_flag = 0;
		}
		else
			shortest_rotate(stack_b, max_num);
	}
}

void	sorting(t_list **stack_a, t_list **stack_b)
{
	int		chunk_size;

	if (!stack_a || !(*stack_a))
		return ((void)write(2, "Error\n", 6));
	if (check_order(stack_a))
		return ;
	chunk_size = ft_lstsize(*stack_a);
	if (check_order(stack_a) == 1)
		return (ft_lstclear(stack_a, free));
	else if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_case_3(stack_a);
	else if (ft_lstsize(*stack_a) <= 10)
		sort_to_10(stack_a, stack_b);
	else
	{
		if (ft_lstsize(*stack_a) <= 100)
			chunk_size = ft_lstsize(*stack_a) / 6;
		else if (ft_lstsize(*stack_a) <= 500)
			chunk_size = ft_lstsize(*stack_a) / 12;
		chunking(stack_a, stack_b, chunk_size);
		sort_to_infinite(stack_a, stack_b);
	}
}
