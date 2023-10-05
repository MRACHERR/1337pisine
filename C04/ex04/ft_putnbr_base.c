#include <unistd.h>
#include <stdio.h>
void ft_putchar(char a)
{
	write(1, &a, 1); 
}

int ft_strlenght(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

int err_check(char *str)
{
	int i;
	int j;
	i = 0;
	j = 0;
if (str[0] == '\0' || ft_strlenght(str) == 1)
		return (0);
	
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == '+' || str[i] == '-' 
			||str[i] == 127 )
		{
			return 0;
		}
		j = i + 1;
		while (j < ft_strlenght(str))
		{
			if (str[i] == str[j])
			{
				return (0);	
			}
			j++;
		}
		i++;	
	}
		return 1;
}
void ft_putnbr_base(int nbr, char *base)
{
	int i;
	int l;
	i = 0;
	l = ft_strlenght(base);
	if (err_check(base) == 1)
	{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		//ft_putnbr_base(nbr, base);
	}
	if (l > nbr)
	{
		ft_putchar(base[nbr]);	
	}
	if (l <= nbr)
	{
		ft_putnbr_base(nbr / l, base);
		ft_putnbr_base(nbr % l, base);	
	}
}
}
/*
int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}
*/
