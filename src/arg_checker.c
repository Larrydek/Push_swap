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

    while (char_nums[i])
    {
        if ((ft_atol(char_nums[i]) < INT_MIN) || (ft_atol(char_nums[i]) > INT_MAX))
            return (free(char_nums), NULL);
        num = malloc(sizeof(int) * 1);
        *num = ft_atoi(char_nums[i]);
        new = ft_lstnew(num);
        if (new)
		    ft_lstadd_back(stack_a, new);
        i++;
    }
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



int arg_checker(char **char_nums)
{
    int i;
    int j;
    i = 0;
    j = 0;
	if (!char_nums)
		return (0);
    while (char_nums[i] != 0)
    {
        while (char_nums[i][j] != 0)
		{
			//printf("%c\n", char_nums[i][j]);
			if (char_nums[i][j] == '-' || char_nums[i][j] == '+' ||
            	char_nums[i][j] == ' ')
				j++;
			if (char_nums[i][j] < '0' || char_nums[i][j] > '9')
				return (0);
			j++;
		}
		j = 0;
		i++;
    }
	return (1);
}