/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:20:22 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 15:27:33 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	result = sign * result;
	return (result);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = (unsigned int)nbr * -1;
	}
	else
		n = nbr;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((char)n % 10 + 48);
}

int	main(int argc, char **argv)
{
	int	sum;
	int	n;

	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n > 1)
		{
			while (n)
			{
				if (is_prime(n))
					sum += n;
				n--;
			}
			ft_putnbr(sum);
		}
		else
			ft_putnbr(0);
	}
	else
		ft_putnbr(0);
	write (1, "\n", 1);
	return (0);
}
