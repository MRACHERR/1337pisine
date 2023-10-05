/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:57:07 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/29 22:59:22 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (power == 0)
	{
		if (nb == 0)
			return (1);
		else
			return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i < power)
		{
			a *= nb;
			i++;
		}
		return (a);
	}
}
/*
int main()
{
	printf("%d\n",ft_iterative_power(0, 0));
}
*/
