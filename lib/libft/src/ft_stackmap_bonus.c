/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:39:41 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/28 19:31:38 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_stack	*ft_stackmap(t_stack *stack, void *(*f)(void *), void (*del)(void *))
{
	t_stack	*new_stack;
	t_stack	*nodo;

	new_stack = NULL;
	nodo = NULL;
	while (stack)
	{
		nodo = ft_stacknew((*f)(stack->content));
		if (!nodo)
		{
			ft_stackclear(&new_stack, del);
			return (NULL);
		}
		ft_stackadd_back(&new_stack, nodo);
		stack = stack->next;
	}
	return (new_stack);
}
