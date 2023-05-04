/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:46:52 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/01 19:56:12 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_combo2(t_stack *stack_a)
{
	if (stack_a->array[1] < stack_a->array[0])
		ra(stack_a, 0);
}

void	sorting_combo3(t_stack *stack_a)
{
	if (stack_a->array[2] > stack_a->array[1] && stack_a->array[1]
		< stack_a->array[0] && stack_a->array[2] > stack_a->array[0])
		sa(stack_a, 0);
	else if (stack_a->array[2] < stack_a->array[1] && stack_a->array[1]
		< stack_a->array[0] && stack_a->array[2] < stack_a->array[0])
	{
		sa(stack_a, 0);
		rra(stack_a, 0);
	}
	else if (stack_a->array[2] > stack_a->array[1] && stack_a->array[1]
		< stack_a->array[0] && stack_a->array[2] < stack_a->array[0])
		ra(stack_a, 0);
	else if (stack_a->array[2] < stack_a->array[1] && stack_a->array[1]
		> stack_a->array[0] && stack_a->array[2] > stack_a->array[0])
	{
		sa(stack_a, 0);
		ra(stack_a, 0);
	}
	else if (stack_a->array[2] < stack_a->array[1] && stack_a->array[1]
		> stack_a->array[0] && stack_a->array[2] < stack_a->array[0])
		rra(stack_a, 0);
}

void	sorting_combo4(t_stack *stack_a, t_stack *stack_b)
{
	int	position_min;
	int	value_min;

	value_min = find_min(stack_a);
	position_min = get_pos(stack_a, value_min);
	push_top(stack_a, stack_b, position_min);
	sorting_combo3(stack_a);
	pa(stack_a, stack_b);
}

void	sorting_combo5(t_stack *stack_a, t_stack *stack_b)
{
	int	position_min;
	int	value_min;

	value_min = find_min(stack_a);
	position_min = get_pos(stack_a, value_min);
	push_top(stack_a, stack_b, position_min);
	sorting_combo4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	small_sorter(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
		sorting_combo2(stack_a);
	else if (stack_a->size == 3)
		sorting_combo3(stack_a);
	else if (stack_a->size == 4)
		sorting_combo4(stack_a, stack_b);
	else if (stack_a->size == 5)
		sorting_combo5(stack_a, stack_b);
}
