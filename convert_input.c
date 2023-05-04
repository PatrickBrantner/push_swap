/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:56:59 by pbrantne          #+#    #+#             */
/*   Updated: 2023/02/01 19:11:08 by pbrantne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	read_temp(char **temp)
{
	int	counter;

	counter = 0;
	while (*temp++)
		counter++;
	return (counter);
}

void	read_stack(int argc, char **argv, int *stackA)
{
	int		i;
	int		k;
	int		x;
	char	**temp;

	k = 0;
	i = 0;
	while (i < argc - 1)
	{
		temp = ft_split(argv[i + 1], ' ');
		x = 0;
		while (temp[x])
		{
			stackA[k] = ft_atoi(temp[x]);
			free(temp[x]);
			x++;
			k++;
		}
		free(temp);
		i++;
	}
}

void	exit_on_error(char **temp)
{
	int	j;

	j = 0;
	ft_putstr("Error\n");
	while (temp[j++])
		free(temp[j - 1]);
	free(temp);
	exit (1);
}

int	size_string(int argc, char **argv)
{
	int		i;
	int		counter;
	char	**temp;
	int		j;

	i = 0;
	counter = 0;
	while (i < argc - 1)
	{
		temp = ft_split(argv[i + 1], ' ');
		if (check_int(temp) == 1 || check_long_int(temp) == 1)
			exit_on_error(temp);
		counter += read_temp(temp);
		i++;
		j = 0;
		while (temp[j++])
			free(temp[j - 1]);
		free(temp);
	}
	return (counter);
}
