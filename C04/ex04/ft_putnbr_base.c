/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:36:40 by akoral            #+#    #+#             */
/*   Updated: 2021/10/29 14:11:23 by akoral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_base(int nb, char *base)
{
	int		len;

	len = 0;
	while (base[len])
		len++;
	if (nb >= len)
	{
		ft_put_base(nb / len, base);
		ft_put_base(nb % len, base);
	}
	else
		ft_putchar(base[nb]);
		printf("%d\n", nb);
}

int	main(void)
{
	ft_put_base(3131, "012345");
}