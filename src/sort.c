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

void	insertion_sort(t_list **stack_a, t_list **stack_b)
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
}
