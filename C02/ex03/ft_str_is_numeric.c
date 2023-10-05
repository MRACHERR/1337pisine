/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:56:24 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/19 11:45:32 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i]== '\0')
		return (1);
		
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9' )
			i++;
		else
			return (0);
	}
	return (1);
}
