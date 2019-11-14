#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

void main() {

	int first, second;
	char c;

	printf("첫번쨰 숫자입력 = ");
	scanf("%d", &first);
	printf("두번쨰 숫자입력 = ");
	scanf("%d", &second);
	getchar();
	printf("부호입력 = ");
	scanf("%c", &c);
	if (c == '+')
		add(first, second);
	if (c == '-')
		sub(first, second);
	if (c == '/')
		div(first, second);
	if (c == '*')
		mul(first, second);
}