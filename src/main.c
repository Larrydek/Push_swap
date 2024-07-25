/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/25 08:03:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;
	//t_list *copy_stack;
	char	**char_nums;
    int     len_char_nums;


	if (argc < 2)
		return (0);

	stack_a = NULL;
	stack_b = NULL;
	//copy_stack = NULL;
    char_nums = arg_cleaner(argv);
    len_char_nums = ft_strstrlen(char_nums);

	stack_a = arg_parser(char_nums, &stack_a);
	ft_free_matrix(char_nums, len_char_nums);

	if (!stack_a)
		return (write(2, "Error\n", 6));
	
	//print_list(&stack_a);
	//printf("Normalizer:\n");
	normalizer(&stack_a);
	//printf("AFTER NORMALIZER\n");
	//printf("Stack_a:\n");
	//print_list(&stack_a);
	//printf("Stack_b:\n");
	//print_list(&stack_b);

	
	//printf("Chunking.....\n");
	chunking(&stack_a, &stack_b);
	//printf("Stack_a:\n");
	//print_list(&stack_a);
	//printf("Stack_b:\n");
	//print_list(&stack_b);

	//copy_stack = stack_b;
	//printf("stack_b normalized: \n");
	/*
	
	while (copy_stack != NULL)
	{
		printf("[%i]", copy_stack->index);
		copy_stack = copy_stack->next;
	}
	*/
	sort_to_infinite(&stack_a, &stack_b);
	
	//printf("\nAFTER SORT: \n");
	//printf("Stack_a:\n");
	//print_list(&stack_a);
	//printf("Stack_b:\n");
	//print_list(&stack_b);

	ft_lstclear(&stack_a, free);
	return (0);
}