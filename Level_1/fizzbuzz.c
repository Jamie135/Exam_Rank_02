/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:28:37 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/19 14:44:30 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		n = (unsigned int)nbr * -1;
		ft_putchar('-');
	}
	else
		n = nbr;
	if (nbr >= 10)
		ft_putnbr(n / 10);
	ft_putchar((char)n % 10 + 48);
}

int	main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
		i++;
		write (1, "\n", 1);
	}
}
