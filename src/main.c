/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/08/20 17:48:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**char_nums;
	int		len_char_nums;

	stack_a = NULL;
	stack_b = NULL;
	if (argc++ == 1)
		return (0);
	else if (argc == 2)
		return (write(1, "Error\n", 6), 0);
	char_nums = arg_cleaner(argv);
	len_char_nums = ft_strstrlen(char_nums);
	if (!arg_parser(char_nums, &stack_a) || !arg_checker(char_nums)
		|| check_duplicates(&stack_a))
	{
		ft_free_matrix(char_nums, len_char_nums);
		ft_lstclear(&stack_a, free);
		return (write(1, "Error\n", 6), 0);
	}
	else if ((arg_checker(char_nums) == 1 && check_duplicates(&stack_a) == 0))
		ft_free_matrix(char_nums, len_char_nums);
	if (check_order(&stack_a) == 0)
		sorting(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	return (0);
}
