/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/24 06:10:03 by marvin           ###   ########.fr       */
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

    ft_printf("Len CHAR_NUMS: %i\n", len_char_nums);
	stack_a = arg_parser(char_nums, &stack_a);
	ft_free_matrix(char_nums, len_char_nums);

/* 	ft_printf(" ---- Original Stack_A -----\n");
	print_list(&stack_a); */
	if (!stack_a)
		return (write(2, "Error\n", 6));

	//ft_swap(&stack_a);
	//ft_printf("STACK A (after swap):\n");
	//print_list(&stack_a);
	
	print_list(&stack_a);
	normalizer(&stack_a);
	print_list(&stack_a);
	
	
	
	sort_to_10(&stack_a, &stack_b);
	print_list(&stack_a);
	printf("index list:\n");
	while (stack_a != NULL)
	{
		printf("[%i]\n", stack_a->index);
		stack_a = stack_a->next;
	}

	/*sort_to_infinite(&stack_a, &stack_b);
	if (check_order(&stack_a) == 1)
		ft_printf("----> ORDENADA\n");
	else
		ft_printf("----> DESORDENADA\n");

	ft_printf("---- ORDERED STACK ----\n");
	print_list(&stack_a);
	print_list(&stack_b);
	ft_printf("---- ORDERED STACK ----\n"); */

	ft_lstclear(&stack_a, free);
	return (0);
}