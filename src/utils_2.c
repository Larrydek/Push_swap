/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:26:48 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/06 20:05:40 by jde-clee         ###   ########.fr       */
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

/* t_stack	**crear_stack(char **char_num)
{
	t_stack **stack;
	t_stack *node;
	int len_stack;
	int i;
	
	len_stack = ft_strstrlen(char_num);
	stack = malloc(len_stack * sizeof(t_stack *));
	node = NULL;
	i = 0;
	
	while(i < len_stack)
	{
		node = ft_stacknew(char_num[i]);
		if (node)
			ft_stackadd_back(stack, node);
		i++;
	}
	return (stack);
} */

void	print_stack(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	while (tmp)
	{
		printf("tmp->content: %i\n", tmp->content);
		tmp = tmp->next;
	}
}