#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "see.h"
#include "save.h"



void main() {
	char *name[100] = { 0, };
	char *number[100] = { 0, };
	int num;

	printf("1. 저장\n2. 가져오기\n(1 or 2) = ");
	scanf("%d", &num);

	if (num == 1)
		save();
	if (num == 2)
		see();
	else
		return 0;
}
