/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:50 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/13 19:21:50 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int *arg_checker(char **argv)
{
    int     *numbers;
    char    **char_nums;
    char    *aux;
    int     i;

    numbers = NULL;
    aux = argv[0];
    i = 1;

    while(argv[i])
    {
        aux = ft_strjoin(aux, argv[i]);
        i++;
    }
    i = 0;
    char_nums = ft_split(aux, ' ');
    free(aux);
    while (numbers[i])
    {
        if (ft_atol(char_nums[i]) < INT_MIN || ft_atol(char_nums[i]) > INT_MAX)
            return (free(numbers), NULL);
        numbers[i] = ft_atoi(char_nums[i]);
        ft_printf("STACK: %u\n", numbers[i]);
        i++;
    }
    free(char_nums);
    return (numbers);
}
