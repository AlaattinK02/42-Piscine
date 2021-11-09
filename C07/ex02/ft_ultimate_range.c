/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:22:07 by akoral            #+#    #+#             */
/*   Updated: 2021/11/05 19:23:56 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc(max - min);
	if (range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int range;

	range = *ft_range(min,max);
}

int	main(void)
{
	int range;

	range = ft_ultimate_range(ft_range(1,),1,3);

	printf("%d",range);
}
