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

t_stack **arg_parser(char **argv)
{
	t_stack *new;
    t_stack **stack_a;
	char	**char_nums;
    int     len_char_nums;
	int		i;

    char_nums = arg_cleaner(argv);
    len_char_nums = ft_strstrlen(char_nums);
	i = 0;

    printf("LEN_CHAR_NUMS: %i\n", len_char_nums);
    stack_a = malloc(len_char_nums * sizeof(t_stack *));
    while (char_nums[i])
    {
        ft_printf("CHAR_NUMS: %s\n", char_nums[i]);
        if ((ft_atol(char_nums[i]) < INT_MIN) || (ft_atol(char_nums[i]) > INT_MAX))
            return (free(char_nums), NULL);
        new = ft_stacknew(ft_atoi(char_nums[i]));
        if (new)
		    ft_stackadd_back(stack_a, new);
		ft_printf("Nodo NEW agregado: %i\n", new->content);
        printf("Stack_a->content = %i\n", (*stack_a)->content);
		free(new);
        i++;
    }
    free(char_nums);
    return (stack_a);
}

char **arg_cleaner(char **argv)
{
    char    **char_nums;
    char    *aux;
    int     i;

    aux = argv[0];
    i = 1;

    while(argv[i])
    {
        aux = ft_strjoin(aux, " ");
        aux = ft_strjoin(aux, argv[i]);
        i++;
    }

    i = 0;
    char_nums = ft_split(aux, ' ');
    free(aux);
	return (char_nums);
}
