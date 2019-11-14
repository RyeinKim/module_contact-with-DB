#pragma once
#include "variable.h"
#include <stdio.h>
#include "scan.h"
void print(vari *print);

void print(vari *print)
{
	printf("N : ");
	scanf("%s", print->name);

	FILE *fp = fopen("my name.txt", "a");
	fprintf(fp, "%s", print->name);
	fclose(fp);
}