/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:30:06 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/19 15:48:04 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			j = 0;
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				while (j < argv[1][i] - 65)
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			j = 0;
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				while (j < argv[1][i] - 96)
				{
					write (1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
