#include <stdio.h>
#include "name_input.h"
#include "name_output.h"
#define  _CRT_SECURE_NO_WARNINGS


int main(void)
{
	char name[50] = { 0, };
	int num;

	while (1) {
		printf("1. �̸� �߰� 2. �̸� ����\n");
		scanf_s("%d", &num);

		switch (num)
		{
		case 1:
			printf("�̸��� �Է����ּ��� : ");
			scanf("%s", name);
			name_input(&name);
			break;

		case 2:
			name_output(&name);
			break;

		default:
			return 0;
			break;
		}

	}

}