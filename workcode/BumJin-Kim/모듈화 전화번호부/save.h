save();

save() {
	char name[100] = { 0, };
	char number[100] = { 0, };
	FILE* fp = fopen("phone.txt", "a");
	printf("이름 입력 = ");
	scanf("%s", name);

	printf("전회반호 입력 = ");
	scanf("%s", number);

	fputs("이름 : ",fp);
	fwrite(name, strlen(name), 1, fp);
	fputs("\n",fp);
	fputs("전화번호 : ",fp);
	fwrite(number, strlen(number), 1, fp);
	fputs("\n",fp);
	fputs("\n",fp);


	fclose(fp);
}