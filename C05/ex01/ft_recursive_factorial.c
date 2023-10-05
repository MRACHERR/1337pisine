/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:55:02 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/29 22:56:36 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
		return (i);
	}
	else
		return (0);
}
/*
int main()
{
	printf("%d \n",ft_recursive_factorial(3));
}	
*/
