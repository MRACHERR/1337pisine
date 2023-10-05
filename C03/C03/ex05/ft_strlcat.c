/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:34:13 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/24 17:42:37 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:34:11 by acherraq          #+#    #+#             */
/*   Updated: 2023/09/24 17:34:11 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strlenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ls;
	unsigned int	ld;
	unsigned int	j;

	i = 0;
	ls = strlenght(src);
	ld = strlenght(dest);
	j = ld;
	if (size == 0 || size <= ld)
		return (ls + size);
	while (src[i] != '\0' && i < size - ld - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ls + ld);
}
/*int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}*/	
