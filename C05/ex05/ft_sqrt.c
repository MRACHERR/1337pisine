/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:09:20 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/30 12:13:45 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	a;
	long	n;

	n = nb;
	a = 2;
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		while (a * a <= n)
		{
			if (a * a == n)
			{
				return (a);
			}
			a++;
		}
	}
	return (0);
}
/*
int main()
{
	printf("%d\n",ft_sqrt(1));
}
*/
