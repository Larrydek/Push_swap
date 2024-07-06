/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/06 18:54:52 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_stack **stack_a;
	t_stack *nodo;
	int i = 1;

	if (argc < 2)
		return (0);
	
	stack_a = arg_parser(&argv[i]);
	nodo = *stack_a;
	
	print_stack(nodo);
	ft_printf("NODO->CONTENT: %i\n", nodo->content);
	while(nodo != NULL)
	{
		ft_printf("STACK CONTENT: %i\n", nodo->content);
		nodo = nodo->next;
		if (nodo->next == NULL)
			break;
	}
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