/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoral <akoral@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:36:40 by akoral            #+#    #+#             */
/*   Updated: 2021/10/29 18:24:20 by akoral           ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

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

bool	ft_basecheck(char *base)
{
	int		i;
	int		lenbase;
	int		si;
	bool	norepeat;

	norepeat = true;
	lenbase = ft_strlen(base);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			norepeat = false;
		si = i + 1;
		while (si <= lenbase)
		{
			if (base[i] == base[si])
			{
				norepeat = false;
			}
			si++;
		}
		i++;
	}
	return (norepeat);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		len;
	bool	no;

	no = false;
	len = ft_strlen(base);
	if (len == 0 || len == 1 || ft_basecheck(base) == false)
		no = true;
	if (no == false)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			return (ft_putnbr_base(-nb, base));
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
		else
			ft_putchar(base[nb]);
	}
}

int		main(void)
{
	ft_putnbr_base(123456, "hello");
	printf("\n");
	fflush(stdout);
}