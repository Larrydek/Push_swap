/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:22:31 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/13 19:22:31 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack    *parser(int *numbers, t_stack *a)
{
    t_stack *new;
    int i;

    i = 0;
    while(i < a->height)
    {
        ft_printf("STACK: %i\n", a->height);
        new = ft_stacknew(numbers[i]);
        ft_stackadd_back(&a, new);
        ft_printf("STACK: %i\n", a->height);
        free(new);
        i++;
    }
    return (a);
}