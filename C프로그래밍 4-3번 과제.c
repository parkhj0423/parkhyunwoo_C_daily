#include<stdio.h>

int main()
{
	int i=2, j=9;

	while (i < 10) {
		while (j >= 1) {
			printf("%d * %d = %d\n", i, j, i*j);
			j--;
		}
		j = 9;
		i++;
		printf("\n");
	}
	return 0;

}