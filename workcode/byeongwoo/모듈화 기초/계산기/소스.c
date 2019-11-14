#include <stdio.h>
#include "plus.h"
#include "minus.h"
#include "mul.h"
#include "dev.h"

void main()
{
	int first = 0, second = 0;
	char oper = 0;

	while (1)
	{
		printf("operation : ");
		scanf("%d %c %d", &first, &oper, &second);

		switch (oper)
		{
		case '+':
			printf("%d %c %d = %d\n", first, oper, second, plus(first, second));
			break;

		case '-':
			printf("%d %c %d = %d\n", first, oper, second, minus(first, second));
			break;

		case '*':
			printf("%d %c %d = %d\n", first, oper, second, mul(first, second));
			break;

		case '/':
			printf("%d %c %d = %d\n", first, oper, second, dev(first, second));
			break;
		}
	}
}