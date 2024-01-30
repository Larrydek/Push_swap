/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:52:19 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/28 19:31:40 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_stack	*ft_lstnew(void *content)
{
	t_stack	*list;

	list = malloc(sizeof(t_stack));
	if (!list)
		return (list);
	list->content = content;
	list->next = NULL;
	return (list);
}
