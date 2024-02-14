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

/* void	*ft_rotate(t_stack *a)
{
	t_stack *aux;

	if (ft_stacksize(a) < 2 || !a)
		return ;
	aux = ft_stacklast(a);
	ft_stackdelone(a);
	ft_stackadd_back(a, aux);
}

void	*ft_reverse_rotate(t_stack *a)
{
	t_stack *aux;

	aux = a;
	if (ft_stacksize(a) < 2 || !a)
		return ;
	ft_stackdelone(a);
	ft_stackadd_back(a, aux);
}
 */