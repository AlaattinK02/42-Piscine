/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:43:51 by akoral            #+#    #+#             */
/*   Updated: 2021/10/26 16:16:38 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] != '\0' && str[i + f] == to_find[f])
		{
			if (to_find[f + 1] == '\0')
			{
				return (&str[i]);
			}
			++f;
		}
		++i;
	}
	return (0);
}
