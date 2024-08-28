/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:29:44 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/28 16:30:36 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int n, int exp)
{
	if (exp < 0)
		return (0);
	else if (exp == 0)
		return (1);
	else
		return (n * ft_recursive_power(n, exp - 1));
}
