/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:48:19 by marvin            #+#    #+#             */
/*   Updated: 2022/10/03 19:48:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;
	int	flag;
	int	start;
	int	end;

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		while (len >= 0)
		{
			while (argv[1][len] == '\0' || argv[1][len] == ' ' || argv[1][len] == '\t')
				len--;
			end = len;
			while (argv[1][len] && argv[1][len] != ' ' && argv[1][len] != '\t')
				len--;
			start = len + 1;
			flag = start;
			while (argv[1][len] == '\0' || argv[1][len] == ' ' || argv[1][len] == '\t')
				len--;
			while (start <= end)
			{
				write (1, &argv[1][start], 1);
				start++;
			}
			if (flag != 0)
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
}
