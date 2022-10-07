/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:55 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/29 12:38:54 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_words(char *str)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != ' ' && str[len] != '\t' && str[len] != '\n')
		len++;
	return (len);
}

char	duplicate_words(char *str)
{
	int	i;
	int	len;
	char	*word;

	i = 0;
	len = len_words(str);
	word = malloc(sizeof(char *) * (len + 1));
	word[len] = '\0';
	while (str[i])
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int	i;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str)
	{
		array[i] = duplicate_words(str);
		i++;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
}

int	count_words(char *str)
{
	int	words;

	words = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str)
	{
		words++;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
	return (words);
}

char	**ft_split(char *str)
{
	int	words;
	char	**array;

	words = count_words(str);
	array = malloc(sizeof(char *) * (words + 1));
	array[words] = 0;
	fill_words(array, str);
	return (array);
}
