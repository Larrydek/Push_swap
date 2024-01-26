/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 01:54:40 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/26 23:31:52 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	*ft_swap(stack *a)
{
	int i;
	stack *aux;

	i = 0;
	while(i < ft_lstsize(a) - 1)
	{
		a = a->next;
		i++;
	}
	aux = a;
	a = ft_lstlast(a);
	a = a->next;
	a = aux;
	return (a);
}
void	*ft_push(stack *a, stack *b)
{
	if (ft_lstsize(b) > 0)
		b = ft_lstlast(a);
	ft_delone(a);
}

void	*ft_rotate(stack *a)
{
	stack *aux;
	
	aux = ft_lstlast(a);
	ft_delone(a);
	ft_lstadd_front(&a, aux);
}

void	*ft_reverse_rotate(stack *a)
{
	stack *aux;

	aux = a[0];
	ft_lstclear(a[0]);
	ft_lstadd_back(a, aux);
	
}



