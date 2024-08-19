/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 04:10:34 by jde-clee          #+#    #+#             */
/*   Updated: 2024/08/19 04:18:20 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	chunking(t_list **stack_a, t_list **stack_b, int chunk_size)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	while (ft_lstsize(*stack_a) > 0)
	{
		if ((*stack_a)->index <= (chunk_size * i))
		{
			pb(stack_a, stack_b);
			counter++;
		}
		rra(stack_a);
		if (counter == (chunk_size * i))
			i++;
	}
}
