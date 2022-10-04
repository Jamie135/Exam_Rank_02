/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:21:08 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 15:37:43 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;
	int	start;
	int	end;

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		while (len != 0 && (argv[1][len] == '\0' || argv[1][len] == ' ' || argv[1][len] == '\t'))
			len--;
		end = len;
		while (len != 0 && argv[1][len] != ' ' && argv[1][len] != '\t')
			len--;
		start = len + 1;
		while (start <= end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
}
