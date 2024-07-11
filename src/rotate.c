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

void	ft_rotate(t_list **a)
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
	//printf("Memory first->next: %p\n", first->next);
}

/*
	rra reverse rotate a:
	Desplaza hacia abajo todos los elementos del stack a una
	posición, de forma que el último elemento se convierte en el primero.
*/

void	ft_reverse_rotate(t_list **a)
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
	//printf("Memory first->next: %p\n", first->next);
}