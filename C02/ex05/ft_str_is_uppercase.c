/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:13:23 by akoral            #+#    #+#             */
/*   Updated: 2021/10/23 17:46:32 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	bool	zero;

	zero = false;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
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
