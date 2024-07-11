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
	t_list *first;
	t_list *second;
	void	*tmp_content;

	if (a && a->next)
	{
		first = a;
		second = a->next;

		tmp_content = first->content;
		first->content = second->content;
		second->content = tmp_content;
	}
}