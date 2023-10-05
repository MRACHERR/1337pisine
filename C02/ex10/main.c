#include <stdio.h>


int main() 
{
	unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
	int lstr(char *s);

	char a[] = "string";
	char b[] = "world";
	printf("%s\n",a);
	printf("%s\n\n\n\n\n",b);

	//printf("%d",lstr(a));
	printf("%d\n",ft_strlcpy(a,b,3));
	printf("%s\n",a);
	printf("%s\n",b);

}
