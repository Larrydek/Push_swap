/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/20 21:47:58 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	char **char_nums;
	t_stack **stack_a;
	t_stack *nodo;
	int i;
	
	if (argc < 2)
		return (0);
		
	i = 0;
	char_nums = arg_cleaner(argv);
	stack_a = arg_parser(argv + 1);
	nodo = stack_a[0];
	while(nodo)
	{
		ft_printf("STACK CONTENT: %i\n", nodo->content);
		nodo = nodo->next;
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