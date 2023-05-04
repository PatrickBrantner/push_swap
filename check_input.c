/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <pbrantne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:41:20 by pbrantne          #+#    #+#             */
/*   Updated: 2023/04/18 13:12:41 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Checks weather all Values are integer

int	check_int(char **string)
{
	int	i;
	int	j;

	i = 0;
	while (string[i])
	{
		j = 0;
		while (string[i][j])
		{
			if ((string[i][j] < 48 || string[i][j] > 57) && string[i][j] != '-')
				return (1);
			if ((j != 0 && string[i][j] == 45) ||
				(j == 0 && string[i][j] == 45 && string[i][j + 1] == '\0'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// Checks weather the Value exeeds IntMax - IntMin

int	check_long_int(char **string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (ft_strlen(string[i]) == 10 && string[i][0] != 45)
		{
			if (ft_strncmp(string[i], "2147483647", 10) > 0)
				return (1);
		}
		if (ft_strlen(string[i]) == 11)
		{
			if (ft_strncmp(string[i], "-2147483648", 11) > 0)
				return (1);
		}
		if (ft_strlen(string[i]) >= 12)
			return (1);
		i++;
	}
	return (0);
}

// Checks if Values occure more then 1 time in the stack

int	check_double(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_a->size)
	{
		j = i + 1;
		while (j < stack_a->size)
		{
			if (stack_a->array[i] == stack_a->array[j])
			{
				ft_putstr("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// Checks if Stack is already sorted 

int	check_sorted(t_stack *stack_a)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < stack_a->size - 1)
	{
		temp = stack_a->array[i];
		if (temp > stack_a->array[i + 1])
			j++;
		i++;
	}
	if (j == 0)
		return (1);
	return (0);
}
