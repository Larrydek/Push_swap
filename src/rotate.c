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

/* void	*ft_rotate(t_list *a)
{
	t_list *aux;

	if (ft_lstsize(a) < 2 || !a)
		return ;
	aux = ft_lstlast(a);
	ft_lstdelone(a);
	ft_lstadd_back(a, aux);
}

void	*ft_reverse_rotate(t_list *a)
{
	t_list *aux;

	aux = a;
	if (ft_lstsize(a) < 2 || !a)
		return ;
	ft_lstdelone(a);
	ft_lstadd_back(a, aux);
}
 */