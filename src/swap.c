/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:47 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/13 19:22:47 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_swap(t_list *a)
{
	int *num;

	num = malloc(sizeof(int));
	*num = *((int *)(ft_lstlast(a)->content));
	if (ft_lstsize(a) > 1)
	{
		ft_lstadd_back(&a, ft_lstnew(num));
		ft_lstdelone(ft_lstlast(a)->next, free);
		ft_lstadd_back(&a, ft_lstnew(tmp));
	}
}