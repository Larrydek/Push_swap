/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:19:20 by jde-clee          #+#    #+#             */
/*   Updated: 2024/08/21 13:54:56 by marvin           ###   ########.fr       */
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

//ARGS PARSER
int		arg_parser(char **char_nums, t_list **stack_a);
char	**arg_cleaner(int argc, char **argv);
int		arg_checker(char **char_nums);
int		check_duplicates(t_list **stack_a);
void	print_list(t_list **stack);
//MOVES
void	sa(t_list **a);
void	sb(t_list **b);
void	pa(t_list **b, t_list **a);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rra(t_list **a);
void	rb(t_list **b);
void	rrb(t_list **b);
//SORTS
void	sort_case_3(t_list **stack_a);
void	sort_case_5(t_list **stack_a, t_list **stack_b);
void	sort_to_10(t_list **stack_a, t_list **stack_b);
void	sort_to_infinite(t_list **stack_a, t_list **stack_b);
//SORT UTILS
void	normalizer(t_list **stack_a);
void	chunking(t_list **stack_a, t_list **stack_b, int chunk_size);
void	sorting(t_list **stack_a, t_list **stack_b);
void	shortest_rotate(t_list **stack_b, int max_num);
int		check_order(t_list **stack_a);
//UTILS
int		get_index(t_list **stack_a, int num);
int		get_index_index(t_list **stack_a, int num);
int		get_min(t_list **stack_a);
int		get_max(t_list **stack_a);
int		next_min_than(t_list **stack_a, int min);
int		ft_is_in(t_list **stack, int num);
void	print_list_indexes(t_list **stack);
void	error(void);
#endif