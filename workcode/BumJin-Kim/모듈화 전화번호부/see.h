see();

see() {
	char name[100] = { 0, };
	
	FILE* fp = fopen("phone.txt", "r");
	while (feof(fp) == 0)
	{
		fread(name, sizeof(char), 1, fp);
		printf("%s", name);
	}
	fclose(fp);
}

