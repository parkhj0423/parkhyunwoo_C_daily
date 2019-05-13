#include<stdio.h>

int main()
{
	int age;
	char gender;
	for (;;) {
		printf("나이를 입력하세요\n");
		scanf("%d", &age);
		if (age <= 0 || age > 100) {
			printf("나이를 다시 입력하세요\n");
			printf("***************\n");
			continue;
		
		}
		printf("성별을 입력하세요(입력 값은 m 또는 f)\n");
		scanf(" %c", &gender);
		if (gender!='f' && gender!='m') {
			printf("성별을 다시 입력하세요(입력 값은 m 과 f 둘중 하나)\n");
			printf("***************\n");
			continue;
		}
		break;
	}
	printf("나이는 %d세, 성별은 %c 입니다.\n", age, gender);
	if (age > 20 && gender == 'f')
		printf("adult & female\n");
	else if(age > 20 && gender == 'm')
		printf("adult & male\n");
	else if (age <= 20 && gender == 'm')
		printf("child & male\n");
	else if (age <= 20 && gender == 'f')
		printf("child & femele\n");

	return 0;
}