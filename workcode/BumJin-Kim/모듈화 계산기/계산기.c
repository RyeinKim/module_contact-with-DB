#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

void main() {

	int first, second;
	char c;

	printf("ù���� �����Է� = ");
	scanf("%d", &first);
	printf("�ι��� �����Է� = ");
	scanf("%d", &second);
	getchar();
	printf("��ȣ�Է� = ");
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