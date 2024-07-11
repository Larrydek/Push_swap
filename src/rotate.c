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

void	ft_rotate(t_list **a)
{
	t_list *last;

	last = *a;
	if (!last || !last->next)
		return ;

	while (last->next)
		last = last->next;
	last->next = *a;
	//printf("Memory first->next: %p\n", first->next);
	*a = (*a)->next;
	last->next->next = NULL;
}

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