/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:59:55 by akoral            #+#    #+#             */
/*   Updated: 2021/10/27 18:17:47 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void	ft_countvars(char *dest, char *src, unsigned int *i, unsigned int *srci)
{
	while (dest[i] != '\0')
		i++;
	while (src[srci] != '\0')
		srci++;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	*i;
	unsigned int	*srci;
	unsigned int	len;
	unsigned int	toplam;
	unsigned int	fdeger;

	i = 0;
	srci = 0;
	ft_countvars(dest, src, i, srci);
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

int				main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Helldssd";
	src = " World";
	index = 0;
	while (index < 8)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : (%lu) $%s$\n", strlcat(dest, src, 46), dest);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 46), dest2);
}