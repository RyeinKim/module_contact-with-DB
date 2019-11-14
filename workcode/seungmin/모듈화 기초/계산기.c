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
		printf("계산식을 입력해 주세요 : ");
		scanf_s("%d", &num1);
		getchar();
		printf("부호를 입력해주세요 : ");
		scanf_s("%c", &c);
		printf("두번째 수를 입력해주세요 : ");
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