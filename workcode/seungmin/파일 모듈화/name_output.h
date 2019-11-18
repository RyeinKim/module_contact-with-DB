#pragma once

void name_output(char* c);

void name_output(char *c)
{

	FILE *fp = fopen("name.txt", "r");

	while (feof(fp) == 0)
	{
		fread(c, sizeof(char), 1, fp);
		printf("%s", c);                       
	}

	fclose(fp);

}