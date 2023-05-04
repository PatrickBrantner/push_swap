/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <pbrantne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:11:26 by pbrantne          #+#    #+#             */
/*   Updated: 2023/04/18 13:11:22 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_helper(t_stack *stack_a)
{
	int	*helper_stack;
	int	i;

	i = 0;
	helper_stack = (int *)malloc((stack_a->size) * sizeof(int));
	while (i < stack_a->size)
	{
		helper_stack[i] = stack_a->array[i];
		i++;
	}
	return (helper_stack);
}

void	bubble_sort(t_stack *s_stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < s_stack->size - 1)
	{
		j = 0;
		while (j < s_stack->size - i - 1)
		{
			if (s_stack->array[j] > s_stack->array[j + 1])
			{
				temp = s_stack->array[j];
				s_stack->array[j] = s_stack->array[j + 1];
				s_stack->array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	make_index(t_stack *stack_helper, t_stack *stack_a)
{
	int	index_list;
	int	index_stack;

	index_stack = 0;
	while (index_stack < stack_a->size)
	{
		index_list = 0;
		while (index_list < stack_helper->size)
		{
			if (stack_a->array[index_stack] == stack_helper->array[index_list])
			{
				stack_a->array[index_stack] = index_list;
				break ;
			}
			index_list++;
		}
		index_stack++;
	}
}

void	big_sorter(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	stack_helper;

	stack_helper.size = stack_a->size;
	stack_helper.array = make_helper(stack_a);
	bubble_sort(&stack_helper);
	make_index(&stack_helper, stack_a);
	radix_sort(stack_a, stack_b);
	free (stack_helper.array);
	stack_helper.array = NULL;
}

int	ultimate_sorter(t_stack *stack_a)
{
	t_stack	stack_b;

	stack_b.size = 0;
	stack_b.array = (int *)malloc((stack_a->size) * sizeof(int));
	if (stack_a->size <= 5)
		small_sorter(stack_a, &stack_b);
	else
		big_sorter(stack_a, &stack_b);
	free (stack_b.array);
	stack_b.array = NULL;
	return (0);
}
