#include<stdio.h>

int main()
{
	int ch = 90;//ch = 'Z'와 동일 (Z를 아스키코드로 변환한 값은 90)
	while (ch >= 65) {//ch = 'A' 와 동일 (A를 아스키코드로 변환한 값은 65)
		printf("%c\n", ch);
		ch--;
	}
	return 0;
}