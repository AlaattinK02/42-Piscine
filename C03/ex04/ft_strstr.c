/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:43:51 by akoral            #+#    #+#             */
/*   Updated: 2021/10/24 16:43:51 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	srci;

	i = 0;
	srci = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (src[srci] != '\0')
	{
		dest[i] = src[srci];
		i++;
		srci++;
	}
	dest[i] = '\0';
	return (dest);
}