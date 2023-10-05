#include <stdio.h>


int main()

{
	char *ft_strncpy(char *dest, char *src, unsigned int n);
	char src1[] = "string src";
	char dest1[] = "string dest";
	int a;
	a = 8;
	printf("%s\n",src1);
	printf("%s\n",dest1);

	printf("%s\n",ft_strncpy(src1, dest1 , a));
	return (0);
}
