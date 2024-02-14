/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:54:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/14 21:51:30 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;
	//t_stack *b;
	int *numbers;
	int i;

	a = malloc(sizeof(t_stack *));
	i = 0;
	if (argc < 2)
		return (0);
	numbers = arg_checker(argv + 1, a);
	if (!numbers)
		return (ft_printf("Error\n"));

	ft_printf("NUMBERS[]: %i\n", numbers[8]);
	i = 0;
	while(i < a->height)
	{
		ft_printf("i: %i\n", i);
		ft_printf("NUMBERS MAIN: %i\n", numbers[i]);
		i++;
	}
	ft_printf("Procesando...\n");
	a = parser(numbers, a);
	while (a)
    {
        ft_printf("STACK MAIN: %i\n", a->content);
        a = a->next;
    }
	//free(numbers);
	//sort(&a, &b);
	//free(a);
	//free(b);
	return (0);
}