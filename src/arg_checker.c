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

int *arg_checker(char **argv, t_stack *a)
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
        aux = ft_strjoin(aux, " ");
        aux = ft_strjoin(aux, argv[i]);
        i++;
    }
    //ft_printf("STR CON NUMEROS LIMPIOS: %s\n", aux);
    i = 0;
    char_nums = ft_split(aux, ' ');
    free(aux);

    while (char_nums[i])
        i++;
    a->height = i;
    ft_printf("len char_nums: %i\n", i);

    numbers = malloc(i * sizeof(int));
    i = 0;
    while (numbers[i])
        i++;
    if (!numbers)
        return (NULL);
    ft_printf("LEN INT_NUMBERS: %i\n", i);
    i = 0;

    while (i < a->height)
    {
        ft_printf("CHAR_NUMS: %s\n", char_nums[i]);
        if ((ft_atol(char_nums[i]) < INT_MIN) || (ft_atol(char_nums[i]) > INT_MAX))
            return (free(numbers), NULL);
        numbers[i] = ft_atoi(char_nums[i]);
        ft_printf("Numbers: %i\n", numbers[i]);
        i++;
    }
    free(char_nums);
    return (numbers);
}
