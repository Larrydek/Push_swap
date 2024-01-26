/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/26 21:42:56 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(char **argv, int argc)
{
	int i;
    stack *stack_a;
    stack *stack_b;

	i = 1;
    stack_a = ft_lstnew(argv[1]);
	while (i < argc - 1)
	{
        ft_lstadd_back(stack_a, argv[i]);
        i++;
	}
}