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

	i = 0;
	r = 0;
	while (i < 10)
	{
		i++;
	}
	return (r);
}

int	ft_ten_queens_puzzle(void);
