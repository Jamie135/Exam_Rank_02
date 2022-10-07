/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:22:53 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 13:49:45 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

int	get_digit(char c, int str_base)
{
	int	digit;

	if (str_base <= 10)
		digit = str_base + '0';
	else
		digit = str_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= digit)
		return (c + 10 - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;
	int digit;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		i++;
	}
	return (res);
}
