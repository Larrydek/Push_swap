/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/18 06:21:54 by jde-clee         ###   ########.fr       */
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

    printf("Len CHAR_NUMS: %i\n", len_char_nums);
	stack_a = arg_parser(char_nums, &stack_a);
	ft_free_matrix(char_nums, len_char_nums);

	printf(" ---- Original Stack_A -----\n");
	print_list(&stack_a);
	if (!stack_a)
		return (ft_printf("Error\n"));
/* 
	int *a;
	int *b;
	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 20;
	*b = 42;

	// stack_b = malloc(sizeof(t_list));
	ft_lstadd_back(&stack_b, ft_lstnew(a));
	ft_lstadd_back(&stack_b, ft_lstnew(b)); */

	//ft_swap(&stack_a);
	//printf("STACK A (after swap):\n");
	//print_list(&stack_a);

	sort_to_10(&stack_a, &stack_b);
	if (check_order(&stack_a) == 1)
		printf("----> ORDENADA\n");
	else
		printf("----> DESORDENADA\n");

	printf("---- ORDERED STACK ----\n");
	print_list(&stack_a);
	print_list(&stack_b);
	printf("---- ORDERED STACK ----\n");

	ft_lstclear(&stack_a, free);
	return (0);
}