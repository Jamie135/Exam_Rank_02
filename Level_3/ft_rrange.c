/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:35:45 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 14:46:12 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	if (start <= end)
		size = end - start;
	else
		size = start - end;
	tab = malloc(sizeof(int) * (size + 1));
	if (!tab)
		return (0);
	while (i <= size)
	{
		tab[i] = end;
		if (start <= end)
			end--;
		else
			end++;
		i++;
	}
	return (tab);
}
