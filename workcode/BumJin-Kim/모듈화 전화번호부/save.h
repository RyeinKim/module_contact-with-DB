save();

save() {
	char name[100] = { 0, };
	char number[100] = { 0, };
	FILE* fp = fopen("phone.txt", "a");
	printf("�̸� �Է� = ");
	scanf("%s", name);

	printf("��ȸ��ȣ �Է� = ");
	scanf("%s", number);

	fputs("�̸� : ",fp);
	fwrite(name, strlen(name), 1, fp);
	fputs("\n",fp);
	fputs("��ȭ��ȣ : ",fp);
	fwrite(number, strlen(number), 1, fp);
	fputs("\n",fp);
	fputs("\n",fp);


	fclose(fp);
}