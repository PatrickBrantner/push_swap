/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:56:27 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/01 18:38:03 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack *s_stack)
{
	int	min;
	int	i;

	i = 0;
	min = s_stack->array[0];
	while (i < s_stack->size)
	{
		if (min > s_stack->array[i])
			min = s_stack->array[i];
		i++;
	}
	return (min);
}

// finds the Index of the given value

int	get_pos(t_stack *s_stack, int value)
{
	int	i;

	i = 0;
	while (s_stack->array[i] != value)
		i++;
	return (i);
}

void	push_top(t_stack *stack_a, t_stack *stack_b, int position)
{
	int	i;

	if (position < 0)
		return ;
	i = position;
	if (stack_a->size / 2 >= position)
	{
		while (i > 0)
		{
			ra(stack_a, 0);
			i--;
		}
	}
	else if (stack_a->size / 2 < position)
	{
		while (i <= stack_a->size - 1)
		{
			rra(stack_a, 0);
			i++;
		}
	}
	pb (stack_a, stack_b);
}
