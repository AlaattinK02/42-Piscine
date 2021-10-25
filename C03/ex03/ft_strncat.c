/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:15:03 by akoral            #+#    #+#             */
/*   Updated: 2021/10/24 15:15:03 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	srci;

	i = 0;
	srci = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[srci] != '\0' && srci < nb)
	{
		dest[i] = src[srci];
		i++;
		srci++;
	}
	dest[i] = '\0';
	return (dest);
}
