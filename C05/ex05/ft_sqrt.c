/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:08:14 by akoral            #+#    #+#             */
/*   Updated: 2021/10/31 20:27:43 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
