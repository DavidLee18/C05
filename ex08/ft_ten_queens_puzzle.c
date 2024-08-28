/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:41:53 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/28 17:42:23 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_conflicts(int queens[10])
{
	int	i;
	int	j;
	int	c;
	int	d;

	i = 0;
	c = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			d = queens[i] - queens[j];
			if (d == 0)
				c++;
			else if (d % (j - i) == 0)
				c++;
			j++;
		}
		i++;
	}
	return (c);
}

int	min_conflicts_pos(int queens[10], int col)
{
	int	i;
	int	c;
	int	r;

	i = 1;
	r = 0;
	queens[col] = 0;
	c = get_conflicts(queens);
	while (i < 10)
	{
		queens[col] = i;
		if (get_conflicts(queens) < c)
		{
			c = get_conflicts(queens);
			r = i;
		}
		i++;
	}
	return (r);
}

int	solve(int queens[10], int init)
{
	int		i;
	char	out;

	if (init == 10)
		return (0);
	queens[0] = init;
	i = 0;
	while (++i < 10)
		queens[i] = min_conflicts_pos(queens, i);
	if (get_conflicts(queens) == 0)
	{
		i = 0;
		while (i < 10)
		{
			out = queens[i] + '0';
			write(STDOUT_FILENO, &out, 1);
			i++;
		}
		write(STDOUT_FILENO, "\n", 1);
		return (1 + solve(queens, init + 1));
	}
	return (solve(queens, init + 1));
}

int	ft_ten_queens_puzzle(void)
{
	int		queens[10];
	int		i;
	int		r;

	r = 0;
	i = 0;
	while (i < 10)
		queens[i++] = -11;
	i = 0;
	return (solve(queens, 0));
}
