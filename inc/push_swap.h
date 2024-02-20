/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:19:20 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/20 21:47:17 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include "../lib/libft/inc/libft.h"
# include "../lib/printf/inc/ft_printf.h"

typedef struct s_stack
{
	int content;
	int index;
	struct s_stack *next;
} t_stack;

//t_stack	*ft_swap(t_stack *a);
//void	*ft_push(t_stack *a,t_stack *b);
//void	*ft_rotate(t_stack *a);
//void	*ft_reverse_rotate(t_stack *a);

t_stack	*ft_stacknew(int content);
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stackadd_front(t_stack **stack, t_stack *new);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
int		ft_stacksize(t_stack *stack);
int		ft_strstrlen(char **argv);

t_stack **arg_parser(char **argv);
char	**arg_cleaner(char **argv);
t_stack	*parser(int *numbers, t_stack *a);

#endif