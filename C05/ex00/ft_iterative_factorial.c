/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:46:28 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/29 22:54:08 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (0 < nb)
		{
			a = a * nb;
			nb--;
		}
		return (a);
	}
	else
		return (0);
}
/*
int main()
{
	printf("%d\n",ft_iterative_factorial(3));
}
*/
