/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:35:32 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/28 16:35:53 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else
		return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}
