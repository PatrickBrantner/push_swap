/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:28:47 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/01 19:29:28 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a, int switcher)
{
	int	temp;

	if (stack_a->size >= 2)
	{
		temp = stack_a->array[0];
		stack_a->array[0] = stack_a->array[1];
		stack_a->array[1] = temp;
		if (switcher == 0)
			ft_putstr("sa\n");
	}
}

// Take the first element at the top of a and put it at the top of b

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;

	if (stack_a->size > 0)
	{
		temp = stack_a->array[0];
		ra(stack_a, 1);
		stack_a->size -= 1;
		stack_b->size += 1;
		stack_b->array[stack_b->size - 1] = temp;
		rrb(stack_b, 1);
		ft_putstr("pb\n");
	}
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;

	if (stack_b->size > 0)
	{
		temp = stack_b->array[0];
		rb(stack_b, 1);
		stack_b->size -= 1;
		stack_a->size += 1;
		stack_a->array[stack_a->size - 1] = temp;
		rra(stack_a, 1);
		ft_putstr("pa\n");
	}
}
