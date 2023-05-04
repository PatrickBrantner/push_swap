/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:35:37 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/01 17:52:35 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;

	if (argc > 1)
	{
		stack_a.size = size_string(argc, argv);
		if (stack_a.size == 0)
			exit (1);
		stack_a.array = (int *)malloc(sizeof(int) * (stack_a.size));
		read_stack(argc, argv, stack_a.array);
		if (check_double(&stack_a) == 1 || check_sorted(&stack_a) == 1)
		{
			free (stack_a.array);
			exit (1);
		}
		ultimate_sorter(&stack_a);
		free (stack_a.array);
		stack_a.array = NULL;
		return (0);
	}
	else
		return (1);
}
