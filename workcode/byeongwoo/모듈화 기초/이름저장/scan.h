#pragma once
#include "print.h"
#include "variable.h"
#include <stdio.h>
void scan(vari *scan);

void scan(vari *scan)
{
	FILE *fp = fopen("my name.txt", "r");
	fscanf(fp, "%s", scan->name);
	printf("%s\n", scan->name);
	fclose(fp);
}
