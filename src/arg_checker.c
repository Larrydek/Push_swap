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

t_list *arg_parser(char **char_nums, t_list **stack_a)
{
	t_list *new;
    int     *num;
	int		i;

	i = 0;

    ft_printf("CHAR_NUMS: \n");
    while (char_nums[i])
    {
        ft_printf("['%s']", char_nums[i]);
        if ((ft_atol(char_nums[i]) < INT_MIN) || (ft_atol(char_nums[i]) > INT_MAX))
            return (free(char_nums), NULL);
        num = malloc(sizeof(int) * 1);
        *num = ft_atoi(char_nums[i]);
        new = ft_lstnew(num);
        if (new)
		    ft_lstadd_back(stack_a, new);
        i++;
    }
    ft_printf("\n");
    return (*stack_a);
}

char **arg_cleaner(char **argv)
{
    char    **char_nums;
    char    *aux;
    int     i;
    

    aux = ft_strdup(argv[1]);
    i = 2;
    while(argv[i])
    {
        aux = ft_strjoin(aux, " ");
        aux = ft_strjoin(aux, argv[i]);
        i++;
    }
    char_nums = ft_split(aux, ' ');
	return (char_nums);
}
