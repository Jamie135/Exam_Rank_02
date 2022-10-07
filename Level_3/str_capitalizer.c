/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:23:11 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 16:34:07 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	capitalizer(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if (str[i] >= 97 && str[i] <= 122 && (str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\0'))
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			capitalizer(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}
