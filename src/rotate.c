/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:45 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/13 19:22:45 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
	ra rotate a:
	Desplaza hacia arriba todos los elementos del stack a una posición,
	de forma que el primer elemento se convierte en el último.
*/

void	ra(t_list **a)
{
	t_list *last;

	if (!a || !*a || !(*a)->next)
		return ;

	last = *a;
	while (last->next)
		last = last->next;
	last->next = *a;
	*a = (*a)->next;
	last->next->next = NULL;
	ft_printf("ra\n");
	//ft_printf("Memory first->next: %p\n", first->next);
}

void	rb(t_list **b)
{
	t_list *last;

	if (!b || !*b || !(*b)->next)
		return ;

	last = *b;
	while (last->next)
		last = last->next;
	last->next = *b;
	*b = (*b)->next;
	last->next->next = NULL;
	ft_printf("rb\n");
	//ft_printf("Memory first->next: %p\n", first->next);
}

/*
	rra reverse rotate a:
	Desplaza hacia abajo todos los elementos del stack a una
	posición, de forma que el último elemento se convierte en el primero.
*/

void	rra(t_list **a)
{
	t_list *last;
	t_list *second_last;

	if (!a || !*a || !(*a)->next)
		return ;

	second_last = *a;
	while (second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *a;
	*a = last;
	ft_printf("rra\n");
	//ft_printf("Memory first->next: %p\n", first->next);
}

void	rrb(t_list **b)
{
	t_list *last;
	t_list *second_last;

	if (!b || !*b || !(*b)->next)
		return ;

	second_last = *b;
	while (second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *b;
	*b = last;
	ft_printf("rrb\n");
	//ft_printf("Memory first->next: %p\n", first->next);
}