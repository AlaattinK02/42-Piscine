/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:04:37 by akoral            #+#    #+#             */
/*   Updated: 2021/10/31 17:13:59 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_iterative_power(int nb, int power)
{
	long long	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power != 0)
	{
		result = result * nb;
		--power;
	}
	return (result);
}
