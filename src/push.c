/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:33 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/13 19:22:33 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
	pb push b:
Toma el primer elemento del stack a y lo pone el primero en el stack
b. No hace nada si a está vacío.
*/
void	pb(t_list **a, t_list **b)
{
	t_list *tmp;

	if (!a || !*a || ft_lstsize(*a) < 1)
		return;
	tmp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = tmp;
	ft_printf("pb\n");
}

/* 
	pa push a:
	Toma el primer elemento del stack b y lo pone el primero en el stack a.
	No hace nada si b está vacío.
*/

void	pa(t_list **b, t_list **a)
{
	t_list *tmp;

	if (!b || !*b || ft_lstsize(*b) < 1)
		return;
	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
	ft_printf("pa\n");
}

/* void	ft_push(t_list *a, t_list *b)
{
	int *num;

	num = malloc(sizeof(int));
	*num = *((int *)(ft_lstlast(b)->content));
	if ((ft_lstsize(b)) > 0)
	{
		ft_lstadd_back(&a, ft_lstnew(num));
		ft_lstdelone(b, free);
	}
} */