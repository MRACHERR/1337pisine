#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swp;
	
	i = 0;
	while(size >= 0)
	{
		while (i < size-1)
		{
			if(tab[i]>tab[i+1])
			{
				swp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = swp;
			}
			else
				i++;
		}
		size--;
	}
	
}

int main()
{
	int a[] = {1,8,3,4,5};
	int s = 5;

	for (int i = 0; i < 5; i++) {
            printf("%d ", a[i]);
        }

	printf("\n");
	
	ft_sort_int_tab(a,s);
	
	for (int i = 0; i < 5; i++) {
            printf("%d ", a[i]);
        }

}
