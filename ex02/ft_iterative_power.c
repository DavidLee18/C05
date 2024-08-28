/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:24:17 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/28 16:24:50 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int n, int exp)
{
	int	i;
	int	r;

	if (exp < 0)
		return (0);
	else if (exp == 0)
		return (1);
	else
	{
		i = 1;
		r = n;
		while (i < exp)
		{
			r *= n;
			i++;
		}
		return (r);
	}
}
