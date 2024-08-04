/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/08/04 02:36:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;
	char	**char_nums;
    int     len_char_nums;

	if (argc < 2)
		return (0);

	stack_a = NULL;
	stack_b = NULL;
    char_nums = arg_cleaner(argv);
    len_char_nums = ft_strstrlen(char_nums);

	stack_a = arg_parser(char_nums, &stack_a);
	ft_free_matrix(char_nums, len_char_nums);

	if (!stack_a)
		return (write(2, "Error\n", 6));
		
	sorting(&stack_a, &stack_b);

	if (!check_order(&stack_a))
		printf("lista DESORDENADA\n");
	else
		printf("LISTA ORDENADA\n");

	ft_lstclear(&stack_a, free);
	return (0);
}
