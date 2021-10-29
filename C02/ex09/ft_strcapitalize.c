/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:23:50 by akoral            #+#    #+#             */
/*   Updated: 2021/10/29 13:36:17 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	ft_char_isnt_alpha(char str)
{
	if (str >= '0' && str <= '9')
	{
		return (false);
	}
	else if (str >= 'A' && str <= 'Z')
	{
		return (false);
	}
	else if (str >= 'a' && str <= 'z')
	{
		return (false);
	}
	else
	{
		return (true);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (str);
	}
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (ft_char_isnt_alpha(str[i]))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
