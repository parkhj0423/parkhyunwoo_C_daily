#include<stdio.h>

int main()
{
	char op;
	int x, y;

	printf("수식을 입력하세요\n");
	printf("예(2+5)\n");
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case'+':
		printf("%d+%d=%d\n", x, y, x + y);
		break;
	case'-':
		printf("%d-%d=%d\n", x, y, x - y);
		break;
	case'*':
		printf("%d*%d=%d\n", x, y, x * y);
		break;
	case'/':
		printf("%d/%d=%d\n", x, y, x / y);
		break;
	case'%':
		printf("%d%%d=%d\n", x, y, x % y);
		break;
	default:
		printf("수식을 잘못 입력하였습니다.(수식은+ - * / % 중에 입력)\n");

	}
	return 0;

}