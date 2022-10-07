/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:32:11 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 15:44:56 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	m;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		if (n1 < n2)
			m = n1;
		else
			m = n2;
		while (m > 1)
		{
			if (n1 % m == 0 && n2 % m == 0)
				break;
			m--;
		}
		printf("%d", m);
	}
	printf("\n");
}
