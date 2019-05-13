#include<stdio.h>

int main()
{
	int score = 0, count = 0, sum = 0;
	
	while (score != -1) {
		count++;
		sum += score;
		printf("input score (-1:quit) ==> ");
		scanf("%d", &score);
	}
	printf("\naverage : %d\n", sum / (count-1));
	return 0;
}