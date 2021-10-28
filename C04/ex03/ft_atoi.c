/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:23:11 by akoral            #+#    #+#             */
/*   Updated: 2021/10/28 14:01:32 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_intlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else if (str[i] == 45 || str[i] == 43 || str[i] == 32)
		{
		}
		else
			break ;
	}
	return (i);
}

int	ft_getminus(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
		{
			i = i * -1;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			break ;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	ilen;
	int	ival;

	ilen = ft_intlen(*str);
	ival = 0;
	while (ilen >= 0)
	{

		ilen--;
	}
	return (ival);
}
