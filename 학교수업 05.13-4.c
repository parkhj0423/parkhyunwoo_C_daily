#include<stdio.h>

int main()
{
	char op;
	int x, y;

	printf("������ �Է��ϼ���\n");
	printf("��(2+5)\n");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		printf("%d+%d=%d\n", x, y, x + y);
	else if (op == '-')
		printf("%d+%d=%d\n", x, y, x - y);
	else if (op == '*')
		printf("%d+%d=%d\n", x, y, x * y);
	else if (op == '/')
		printf("%d+%d=%d\n", x, y, x / y);
	else if (op == '%')
		printf("%d+%d=%d\n", x, y, x % y);
	else
		printf("������ �߸� �Է��Ͽ����ϴ�.(������+ - * / % �߿� �Է�)\n");

	return 0;
	
}