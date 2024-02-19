/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:50 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack_a;
	int len_stack;
	char **char_nums;
	int i;
	
	if (argc < 2)
		return (0);
		
	i = 0;
	char_nums = arg_cleaner(argv);
	while (char_nums[i])
		i++;
	len_stack = i;
	
	stack_a = arg_parser(argv + 1);
	while(stack_a)
	{
		ft_printf("STACK CONTENT: %i\n", stack_a->content);
		stack_a = stack_a->next;
	}
	if (!stack_a)
		return (ft_printf("Error\n"));
		
	i = 0;
	ft_printf("Procesando...\n");
	//free(numbers);
	//sort(&a, &b);
	//free(a);
	//free(b);
	return (0);
}