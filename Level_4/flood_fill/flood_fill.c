/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:05:51 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 17:18:56 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
#include <stdlib.h>
#include <stdio.h>

void	fill(char **tab, t_point size, t_point begin, char to_fill)
{
	if (begin.y < 0 || begin.y >= size.y || begin.x < 0 || begin.x >= size.x
		|| tab[begin.y][begin.x] != to_fill)
		return;
	tab[begin.y][begin.x] = 'F';
	fill(tab, size, (t_point){begin.x - 1, begin.y}, to_fill);
	fill(tab, size, (t_point){begin.x + 1, begin.y}, to_fill);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, to_fill);
	fill(tab, size, (t_point){begin.x, begin.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
