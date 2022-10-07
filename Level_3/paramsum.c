/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:19 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 15:30:30 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((char)n % 10 + 48);
}

int	main(int argc, char **argv)
{
	if (!argv[1])
		ft_putnbr(0);
	else
		ft_putnbr(argc - 1);
	ft_putchar('\n');
}
