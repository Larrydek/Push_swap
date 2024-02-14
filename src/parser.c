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

t_stack    *parser(int *numbers)
{
    t_stack *new;
    t_stack *a;
    int i;

    i = 0;
    while(numbers[i])
    {
        new = ft_stacknew(numbers[i]);
        ft_stackadd_back(&a, new);
        free(new);
        i++;
    }
    return (a);
}