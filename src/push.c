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

void	ft_push(t_list *a, t_list *b)
{
	int *num;

	num = malloc(sizeof(int));
	*num = *((int *)(ft_lstlast(b)->content));
	if ((ft_lstsize(b)) > 0)
	{
		ft_lstadd_back(&a, ft_lstnew(num));
		ft_lstdelone(b, free);
	}
}