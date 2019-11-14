#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char* name[100] = { 0, };
	char* number[100] = { 0, };
	int num;

	printf("1. 2.    ");
	scanf("%d", &num);

	if (num == 1) {
		FILE* fp = fopen("phonebook.txt", "a");
		printf("이름 입력 : ");
		scanf("%s", &name);

		printf("전화번호 입력 : ");
		scanf("%s", &number);

		fwrite(name, strlen(name), 1, fp);

		fwrite(number, strlen(number), 1, fp);

		fclose(fp);
	}

	if (num == 2) {
		FILE* fp = fopen("phonebook.txt", "r");
		while (feof(fp) == 0)
		{
			fread(name, sizeof(char), 1, fp);
			printf("%s", name);

		}
		fclose(fp);
	}

}