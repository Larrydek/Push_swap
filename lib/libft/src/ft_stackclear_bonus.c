/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:56:52 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/28 19:31:25 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_stackclear(t_stack **stack, void (*del)(void *))
{
	t_stack	*aux;

	while (*stack && stack)
	{
		aux = (*stack)->next;
		ft_stackdelone(*stack, del);
		*stack = aux;
	}
}
