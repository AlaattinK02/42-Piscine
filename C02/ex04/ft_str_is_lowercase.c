/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:11:53 by akoral            #+#    #+#             */
/*   Updated: 2021/10/23 17:45:23 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	bool	zero;

	zero = false;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
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
