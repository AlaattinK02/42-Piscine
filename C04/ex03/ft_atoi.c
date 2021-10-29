/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:23:11 by akoral            #+#    #+#             */
/*   Updated: 2021/10/29 18:15:47 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_intlen(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			c++;
		else if (str[i] == 45 || str[i] == 43 || str[i] == 32)
		{
		}
		else
			break ;
		i++;
	}
	return (c);
}

int	ft_getminus(char *str)
{
	int	i;
	int	minusval;

	i = 0;
	minusval = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
		{
			minusval = minusval * -1;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			break ;
		i++;
	}
	return (minusval);
}

int	ft_power(int base, int expo)
{
	long long	result;

	result = 1;
	while (expo != 0)
	{
		result *= base;
		--expo;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	ilen;
	int	ival;
	int	c;
	int	i;

	ilen = ft_intlen(str);
	ival = 0;
	i = 1;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 48 && str[c] <= 57)
		{
			while (i <= ilen)
			{
				ival = ival + ((str[c] - 48) * ft_power(10, (ilen - i)));
				i++;
				c++;
			}
		}
		c++;
	}
	return (ival * ft_getminus(str));
}
