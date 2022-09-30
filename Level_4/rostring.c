/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:28:12 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/30 14:44:30 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	flag1;
	int	flag2;
	int	start;
	int	end;
	
	i = 0;
	flag1 = 0;
	flag2 = 0;
	if (argc > 1)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		end = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				flag1 = 1;
				flag2 = 1;
			}
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flag1)
					write (1, " ", 1);
				flag1 = 0;
				write (1, &argv[1][i], 1);
			}
			i++;
		}
		if (flag2 == 1)
			write (1, " ", 1);
		while (start < end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
}
