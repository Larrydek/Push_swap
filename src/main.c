/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/14 01:34:59 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	//t_stack *a;
	//t_stack *b;
	int *numbers;

	if (argc < 2)
		return (0);
	numbers = arg_checker(argv + 1);
	if (!numbers)
		return (ft_printf("Error\n"));
	ft_printf("Procesando...\n");
	//a = parser(numbers);
	//free(numbers);
	//sort(&a, &b);
	//free(a);
	//free(b);
	return (0);
}