/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:19:20 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/27 21:09:47 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_data
{
    int content;
    struct s_data *next;
} stack;

stack	*ft_swap(stack *a);
void	*ft_push(stack *a, stack *b);
void	*ft_rotate(stack *a);
void	*ft_reverse_rotate(stack *a);

#endif