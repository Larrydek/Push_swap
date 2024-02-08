/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:33:50 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/28 19:31:29 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_stackiter(t_stack *stack, void (*f)(void *))
{
	while (stack)
	{
		(*f)(stack->content);
		stack = stack->next;
	}
}
