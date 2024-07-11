/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/11 16:37:01 by jde-clee         ###   ########.fr       */
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

	stack_a = 0;
	stack_b = 0;
    char_nums = arg_cleaner(argv);
	/* 
	while (char_nums[i])
	{
		printf("char_nums main: %s\n", char_nums[i]);
		i++;
	} */
    len_char_nums = ft_strstrlen(char_nums);

    printf("Len CHAR_NUMS: %i\n", len_char_nums);
	stack_a = arg_parser(char_nums, &stack_a);
	ft_free(char_nums, len_char_nums);

	print_list(&stack_a);
	if (!stack_a)
		return (ft_printf("Error\n"));

	ft_printf("Procesando...\n");

	int *a;
	int *b;
	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 20;
	*b = 42;

	// stack_b = malloc(sizeof(t_list));
	ft_lstadd_back(&stack_b, ft_lstnew(a));
	ft_lstadd_back(&stack_b, ft_lstnew(b));

	printf("STACK A:\n");
	//ft_swap(stack_a);
	//printf("STACK A (after swap):\n");
	print_list(&stack_a);
	//printf("STACK B:\n");
	//print_list(&stack_b);

	//ft_rotate(&stack_a);
	//printf("Stack A (after rotate): \n");

	printf("Stack A (after reverse rotate): \n");
	ft_reverse_rotate(&stack_a);
	print_list(&stack_a);


	ft_lstclear(&stack_a, free);
	return (0);
}