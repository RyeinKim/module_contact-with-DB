#include <stdio.h>
#include "plus.h"
#include "minus.h"
#include "mult.h"
#include "div.h"

int main(void)
{
	int num1, num2;
	char c;

	while (1)
	{
		printf("������ �Է��� �ּ��� : ");
		scanf_s("%d", &num1);
		getchar();
		printf("��ȣ�� �Է����ּ��� : ");
		scanf_s("%c", &c);
		printf("�ι�° ���� �Է����ּ��� : ");
		scanf_s("%d", &num2);

		switch (c)
		{
		case '+':
			printf("%d\n", plus(num1, num2));
			printf("\n");
			break;
		case '-':
			printf("%d\n", minus(num1, num2));
			printf("\n");
			break;
		case '*':
			printf("%d\n", mult(num1, num2));
			printf("\n");
			break;
		case '/':
			printf("%d\n", div(num1, num2));
			printf("\n");
			break;
		default:
			return 0;
			break;
		}
	}
}