/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:07:53 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/01 17:59:21 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	s;
	int	c;
	int	i;

	s = stack_a->size;
	i = 0;
	while (check_sorted(stack_a) != 1)
	{
		c = 0;
		while (c < s)
		{
			if (stack_a->array[0] >> i & 1)
				ra(stack_a, 0);
			else
				pb(stack_a, stack_b);
			c++;
		}
		while (stack_b->size != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
