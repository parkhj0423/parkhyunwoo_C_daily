#include<stdio.h>

int main()
{
	int i;
	printf("input integer ==> ");
	scanf("%d", &i);
	switch (i) {
	case 1:
		printf("1 input\n");
		break;
	case 2:
		printf("2 input\n");
		break;
	case 3:
		printf("3 input\n");
		break;
	default:
		printf("others input\n");
	}
	return 0;
}