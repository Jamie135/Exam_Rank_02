/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:37:00 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 16:57:36 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		nbr = (nbr % 1000000000) * -1;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr / 10 > 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 2)
	{
		while (i <= 9)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(ft_atoi(argv[1]));
			write (1, " = ", 3);
			ft_putnbr(i * ft_atoi(argv[1]));
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
}
