/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:20:16 by akoral            #+#    #+#             */
/*   Updated: 2021/10/22 13:08:37 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	tmp;
	int	count2;

	count = 0;
	while (count < size - 1)
	{
		count2 = 0;
		while (0 < size - count2 - 1)
		{
			if (tab[count2] > tab[count2 + 1])
			{
				tmp = tab[count2 + 1];
				tab[count2 + 1] = tab[count2];
				tab[count2] = tmp;
			}
			count2++;
		}
		count++;
	}
}
