/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:08:43 by akoral            #+#    #+#             */
/*   Updated: 2021/10/23 17:44:42 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	bool	zero;

	zero = false;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
		{
			zero = true;
		}
		i++;
	}
	if (zero == false)
	{
		return (1);
	}
	if (zero == true)
	{
		return (0);
	}
	return (zero);
}
