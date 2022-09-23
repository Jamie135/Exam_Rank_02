/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:16:05 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/23 11:16:21 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char    *ft_itoa(int nbr)
{
	int	len;
	long	n;
	char	*str;

	n = nbr;
	len = ft_len(n);
	if (len == 0)
		len = 1;
	str = (char *)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = 48;
	if (n < 0);
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[len--] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
