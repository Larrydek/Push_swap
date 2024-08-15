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

int	arg_parser(char **char_nums, t_list **stack_a)
{
	t_list	*new;
	int		*num;
	int		i;

	i = 0;
	while (char_nums[i])
	{
		if ((ft_atol(char_nums[i]) < INT_MIN) ||
			(ft_atol(char_nums[i]) > INT_MAX))
			return (ft_lstclear(stack_a, free), 0);
		num = malloc(sizeof(int) * 1);
		*num = ft_atoi(char_nums[i]);
		new = ft_lstnew(num);
		if (new)
			ft_lstadd_back(stack_a, new);
		i++;
	}
	return (1);
}

char	**arg_cleaner(char **argv)
{
	char	**char_nums;
	char	*aux;
	int		i;

	aux = ft_strdup(argv[1]);
	i = 2;
	while (argv[i])
	{
		aux = ft_strjoin(aux, " ");
		aux = ft_strjoin(aux, argv[i]);
		i++;
	}
	char_nums = ft_split(aux, ' ');
	return (char_nums);
}

int	arg_checker(char **char_nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!char_nums)
		return (0);
	while (char_nums[i] != 0)
	{
		while (char_nums[i][j] != 0)
		{
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

int	check_duplicates(t_list **stack_a)
{
	t_list	*copy_stack;
	t_list	*i;
	int		lst_size;

	lst_size = ft_lstsize(*stack_a) - 1;
	copy_stack = *stack_a;
	i = NULL;
	while (lst_size > 0)
	{
		i = copy_stack->next;
		while (i != NULL)
		{
			if (*(int *)copy_stack->content == *(int *)i->content)
				return (1);
			i = i->next;
		}
		lst_size--;
		copy_stack = copy_stack->next;
	}
	return (0);
}
