/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:05:11 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 16:15:02 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	uni(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (argc == 3)
	{
		while(argv[1][i])
			i++;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		while (k < i)
		{
			if (uni(argv[1], argv[1][k], k) == 1)
				write (1, &argv[1][k], 1);
			k++;
		}
	}
	write (1, "\n", 1);
}
