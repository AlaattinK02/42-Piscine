/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:36:05 by akoral            #+#    #+#             */
/*   Updated: 2021/10/30 18:39:51 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int i;

	i = 0;
	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	while (n < argc)
	{
		write(1, argv[n], ft_strlen(argv[n]));
		write(1, "\n", 1);
		n++;
	}
	return (0);
}