/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:19:20 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/08 21:04:48 by jde-clee         ###   ########.fr       */
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

//t_list	*ft_swap(t_list *a);
//void	*ft_push(t_list *a,t_list *b);
//void	*ft_rotate(t_list *a);
//void	*ft_reverse_rotate(t_list *a);

int		ft_strstrlen(char **argv);

t_list *arg_parser(char **char_nums, t_list **stack_a);
char	**arg_cleaner(char **argv);
t_list	*parser(int *numbers, t_list *a);
void	print_list(t_list **stack);

#endif