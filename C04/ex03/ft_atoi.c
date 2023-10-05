/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:24:05 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/26 21:50:11 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char str)
{
	if (str == '\t' || str == ' ' || str == '\f' 
		||str == '\n' || str == '\r' || str == '\v')
	{
		return (0);
	}
	return (1);
}

int	ft_char_to_int(char *str, int i)
{
	int	a;

	a = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - 48;
		i++;
	}
	return (a);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	a;

	j = 0;
	i = 0;
	while (is_space(str[i]) == 0)
	{
		i++;
	}
	while (str[i] == '-' || (str[i] == '+'))
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 == 0)
	{
		j = 1;
	}
	else
		j = -1;
	a = ft_char_to_int(str, i);
	return (a * j);
}
/*
int main()
{
	char a[] = "     +---+563793iffff";
	char b[] = "          222";

	printf("%d\n", ft_atoi(a));
}
*/
