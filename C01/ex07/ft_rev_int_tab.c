/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_rev_int_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 05:28:00 by akoral            #+#    #+#             */
/*   Updated: 2021/10/22 05:28:00 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		s = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = s;
		count++;
	}
}
