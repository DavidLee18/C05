/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:09:12 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/28 17:09:12 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int n)
{
	int	i;

	if (n <= 2)
		return (2);
	else
	{
		i = 2;
		while (i <= n / 2)
		{
			if (n % i == 0)
				return (ft_find_next_prime(n + 1));
			i++;
		}
		return (n);
	}
}
