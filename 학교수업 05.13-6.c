#include<stdio.h>

int main()
{
	char op;
	int x, y;

	printf("������ �Է��ϼ���\n");
	printf("��(2+5)\n");
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
		printf("������ �߸� �Է��Ͽ����ϴ�.(������+ - * / % �߿� �Է�)\n");

	}
	return 0;

}