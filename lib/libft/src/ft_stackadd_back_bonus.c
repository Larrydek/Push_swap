/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 03:46:05 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/28 19:31:13 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	if (*stack)
		ft_stacklast(*stack)->next = new;
	else
		*stack = new;
}
