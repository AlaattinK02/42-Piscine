/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:19:08 by akoral            #+#    #+#             */
/*   Updated: 2021/10/24 11:51:21 by akoral           ###   ########.fr       */
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
	i++;
	while (src[srci] != '\0')
	{
		dest[i] = src[srci];
		i++;
		srci++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}