/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:14:08 by akoral            #+#    #+#             */
/*   Updated: 2021/10/27 15:53:05 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	bool	zero;

	zero = false;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 127)))
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
