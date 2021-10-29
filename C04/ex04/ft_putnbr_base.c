/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:36:40 by akoral            #+#    #+#             */
/*   Updated: 2021/10/29 15:23:23 by akoral           ###   ########.fr       */
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
	bool	no;

	len = 0;
	no = false;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-')
			no = true;
		len++;
	}
	if (len == 0 || len == 1)
		no = true;
	if (no == false)
	{
		if (nb >= len)
		{
			ft_put_base(nb / len, base);
			ft_put_base(nb % len, base);
		}
		else
		{
			ft_putchar(base[nb]);
		}
	}
}
