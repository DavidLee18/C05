/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:17:30 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/28 16:17:30 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int	i;
	int	r;

	if (n < 0)
		return (0);
	else if (n <= 1)
		return (1);
	else
	{
		i = 1;
		r = 1;
		while (i <= n)
		{
			r *= i;
			i++;
		}
		return (r);
	}
}
