#include<stdio.h>

int main()
{
	int ch = 90;//ch = 'Z'�� ���� (Z�� �ƽ�Ű�ڵ�� ��ȯ�� ���� 90)
	while (ch >= 65) {//ch = 'A' �� ���� (A�� �ƽ�Ű�ڵ�� ��ȯ�� ���� 65)
		printf("%c\n", ch);
		ch--;
	}
	return 0;
}