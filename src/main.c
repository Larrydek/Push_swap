/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/08 21:03:24 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	char	**char_nums;
    int     len_char_nums;

	if (argc < 2)
		return (0);

	stack_a = NULL;	
    char_nums = arg_cleaner(argv);
    len_char_nums = ft_strstrlen(char_nums);

    printf("Len CHAR_NUMS: %i\n", len_char_nums);
	stack_a = arg_parser(char_nums, &stack_a);
	
	
	printf("-- HASTA ACÁ EL MAIN--\n");
	print_list(&stack_a);
	if (!stack_a)
		return (ft_printf("Error\n"));
		
	// i = 0;
	ft_printf("Procesando...\n");
	//free(numbers);
	//sort(&a, &b);
	//free(a);
	//free(b);
	return (0);
}