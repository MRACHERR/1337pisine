#include <unistd.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{

	int i;

	i=0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	
	}
	dest[i]='\0';
	return (dest);
}
int main(void)
{

	char src1[] = "hi";
	char dest1[]= "hello";
	printf("%s\n",src1);
	printf("%s\n",dest1);

	char *i= ft_strcpy(dest1,src1);
	//printf("%s",ft_strcpy(dest1,src1));
	printf("%s",i);
	return (0);
}
