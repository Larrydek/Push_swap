/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:48 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/08 21:15:15 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_strstrlen(char **argv)
{
	int i;

	i = 0;
	while (argv[i] != 0)
		i++;
	return (i);
}

void	print_list(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;
	while (tmp)
	{
		printf("Stack_a->content = %i\n", *(int *)(tmp)->content);
		printf("stack_a->content MEMORY dir: %p\n", (void *)tmp->content);
		tmp = tmp->next;
	}
}
