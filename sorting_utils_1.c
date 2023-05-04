/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:27:44 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/01 19:28:05 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack_a, int switcher)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_a->array[0];
	while (i < stack_a->size - 1)
	{
		stack_a->array[i] = stack_a->array[i + 1];
		i++;
	}
	stack_a->array[i] = temp;
	if (switcher == 0)
		ft_putstr("ra\n");
}

void	rra(t_stack *stack_a, int switcher)
{
	int	temp;
	int	i;

	i = stack_a->size - 1;
	temp = stack_a->array[i];
	while (i > 0)
	{
		stack_a->array[i] = stack_a->array[i - 1];
		i--;
	}
	stack_a->array[0] = temp;
	if (switcher == 0)
		ft_putstr("rra\n");
}

void	rb(t_stack *stack_b, int switcher)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_b->array[0];
	while (i < stack_b->size - 1)
	{
		stack_b->array[i] = stack_b->array[i + 1];
		i++;
	}
	stack_b->array[i] = temp;
	if (switcher == 0)
		ft_putstr("rb\n");
}

void	rrb(t_stack *stack_b, int switcher)
{
	int	temp;
	int	i;

	i = stack_b->size - 1;
	temp = stack_b->array[i];
	while (i > 0)
	{
		stack_b->array[i] = stack_b->array[i - 1];
		i--;
	}
	stack_b->array[0] = temp;
	if (switcher == 0)
		ft_putstr("rrb\n");
}
