/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 01:54:40 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/30 17:54:26 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack	*ft_swap(t_stack *a)
{
	int aux;

	if (ft_lstsize(a) < 2)
		return (NULL);
	aux = a->content;
	a->content = a->next->content;
	a = a->next;
	a->content = aux;
	return (a);
}

void	*ft_push(t_stack *a, t_stack *b)
{
	if (ft_lstsize(a) > 0)
	{
		ft_lstadd_front(b, a);
		ft_delone(a);
	}
}

void	*ft_rotate(t_stack *a)
{
	t_stack *aux;

	if (ft_lstsize(a) < 2)
		return ;
	aux = ft_lstlast(a);
	ft_delone(a);
	ft_lstadd_back(a, aux);
}

void	*ft_reverse_rotate(t_stack *a)
{
	t_stack *aux;

	aux = a;
	if (ft_lstsize(a) < 2)
		return ;
	ft_lstdelone(a);
	ft_lstadd_back(a, aux);
}
