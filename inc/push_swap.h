/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:19:20 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/18 04:33:36 by jde-clee         ###   ########.fr       */
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

int		ft_strstrlen(char **argv);
t_list *arg_parser(char **char_nums, t_list **stack_a);
char	**arg_cleaner(char **argv);
void	print_list(t_list **stack);
void	sort_case_2(t_list **stack_a);
void	sort_case_3(t_list **stack_a);
void	sort_case_5(t_list **stack_a, t_list **stack_b);
void	sort_to_10(t_list **stack_a, t_list **stack_b);

//MOVEMENTS
void	sa(t_list **a);
void	sb(t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);
void	ra(t_list **a);
void    rra(t_list **a);

//SORT UTILS
int		get_index(t_list **stack_a, int num);
int		get_min(t_list **stack_a);
int		check_order(t_list **stack_a);

#endif