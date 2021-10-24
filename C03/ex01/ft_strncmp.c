/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 10:37:07 by akoral            #+#    #+#             */
/*   Updated: 2021/10/24 11:18:16 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_strsame(char *s1, char *s2, unsigned int n, int i)
{
	return ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'));
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (ft_strsame(s1, s2, n, i) && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
