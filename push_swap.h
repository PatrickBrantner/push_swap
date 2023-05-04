/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:26:39 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/09 11:17:13 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include "./libft/libft.h"

typedef struct s_stack {
	int	*array;
	int	size;
}	t_stack;

int		check_int(char **string);
int		check_long_int(char **string);
int		check_double(t_stack *stack_a);
int		check_sorted(t_stack *stack_a);
int		read_temp(char **temp);
int		size_string(int argc, char **argv);
void	read_stack(int argc, char **argv, int *stackA);
int		ultimate_sorter(t_stack *stack_a);
void	small_sorter(t_stack *stack_a, t_stack *stack_b);
void	sorting_combo2(t_stack *stack_a);
void	ra(t_stack *stack_a, int switcher);
void	sorting_combo3(t_stack *stack_a);
void	sa(t_stack *stack_a, int switcher);
void	rra(t_stack *stack_a, int switcher);
void	pb(t_stack *stack_a, t_stack *stack_b);
int		find_min(t_stack *t_stack);
int		get_pos(t_stack *t_stack, int value);
void	sorting_combo4(t_stack *stack_a, t_stack *stack_b);
void	rrb(t_stack *stack_b, int switcher);
void	push_top(t_stack *stack_a, t_stack *stack_b, int position);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	sorting_combo5(t_stack *stack_a, t_stack *stack_b);
void	big_sorter(t_stack *stack_a, t_stack *stack_b);
int		*make_helper(t_stack *stack_a);
void	bubble_sort(t_stack *t_stack);
void	make_index(t_stack *stack_helper, t_stack *stack_a);
void	radix_sort(t_stack *stack_a, t_stack *stack_b);
void	rb(t_stack *stack_b, int switcher);

#endif
