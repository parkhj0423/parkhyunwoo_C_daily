#include<stdio.h>

int main()
{
	int age;
	char gender;
	for (;;) {
		printf("���̸� �Է��ϼ���\n");
		scanf("%d", &age);
		if (age <= 0 || age > 100) {
			printf("���̸� �ٽ� �Է��ϼ���\n");
			printf("***************\n");
			continue;
		
		}
		printf("������ �Է��ϼ���(�Է� ���� m �Ǵ� f)\n");
		scanf(" %c", &gender);
		if (gender!='f' && gender!='m') {
			printf("������ �ٽ� �Է��ϼ���(�Է� ���� m �� f ���� �ϳ�)\n");
			printf("***************\n");
			continue;
		}
		break;
	}
	printf("���̴� %d��, ������ %c �Դϴ�.\n", age, gender);
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