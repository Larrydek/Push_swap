/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:39:41 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/28 19:31:38 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	t_stack	*new_list;
	t_stack	*nodo;

	new_list = NULL;
	nodo = NULL;
	while (lst)
	{
		nodo = ft_lstnew((*f)(lst->content));
		if (!nodo)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, nodo);
		lst = lst->next;
	}
	return (new_list);
}
