/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:59:55 by akoral            #+#    #+#             */
/*   Updated: 2021/10/26 16:16:34 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srci;
	unsigned int	len;

	i = 0;
	srci = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	len = i;
	while (src[srci] != '\0')
	{
		srci++;
	}
	len = srci + len;
	srci = 0;
	while (i < size - 1)
	{
		dest[i] = src[srci];
		i++;
		srci++;
	}
	dest[i] = '\0';
	return (len);
}
