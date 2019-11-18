#pragma once

void name_input(char* c);

void name_input(char* c) {

	FILE* fp = fopen("name.txt", "a");

	fprintf(fp, "%s\n", c);

	fclose(fp);

}
