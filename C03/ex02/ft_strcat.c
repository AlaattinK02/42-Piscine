/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:19:08 by akoral            #+#    #+#             */
/*   Updated: 2021/10/26 16:16:47 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	srci;

	i = 0;
	srci = 0;
	while (dest[i] != '\0')
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
