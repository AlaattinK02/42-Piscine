/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:27:31 by akoral            #+#    #+#             */
/*   Updated: 2021/10/23 17:43:34 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_char_isnt_alpha(char str)
{
	return (!((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')));
}

int	ft_str_is_alpha(char *str)
{
	int		i;
	bool	zero;

	zero = false;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_isnt_alpha(str[i]))
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
