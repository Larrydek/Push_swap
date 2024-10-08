/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:47 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/13 19:22:47 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* 
	sa swap a:
	Intercambia los dos primeros elementos del stack a.
	No hace nada si hay uno o menos elementos
*/

void	sa(t_list **a)
{
	t_list	*first;
	t_list	*second;

	if (*a && (*a)->next)
	{
		first = *a;
		second = (*a)->next;
		first->next = second->next;
		second->next = first;
		*a = second;
	}
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	t_list	*first;
	t_list	*second;

	if (*b && (*b)->next)
	{
		first = *b;
		second = (*b)->next;
		first->next = second->next;
		second->next = first;
		*b = second;
	}
	ft_printf("sb\n");
}
