/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:27:05 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 14:35:03 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
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
		tab[i] = start;
		if (start <= end)
			start++;
		else
			start--;
		i++;
	}
	return (tab);
}
