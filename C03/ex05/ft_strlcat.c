/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:59:55 by akoral            #+#    #+#             */
/*   Updated: 2021/10/28 13:29:13 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (true)
	{
		if (str[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srci;
	unsigned int	len;
	unsigned int	toplam;
	unsigned int	fdeger;

	i = ft_strlen(dest);
	srci = ft_strlen(src);
	if (size == 0)
		return (srci);
	fdeger = i;
	toplam = i + srci;
	len = srci + size;
	srci = 0;
	while (i < size - 1)
	{
		dest[i] = src[srci];
		i++;
		srci++;
	}
	dest[i] = '\0';
	if (fdeger < size)
		return (toplam);
	return (len);
}
