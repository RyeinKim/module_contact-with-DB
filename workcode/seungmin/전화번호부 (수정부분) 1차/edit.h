int edit_info(_contact* contact);

static int query_stat;
static char query[255];

int edit_info(_contact* contact)
{
	char old_name[20];
	int field, menu, menu1;

	printf("\n[����� ������]\n\n");
	print(connection);		//����ٰ� �װ� ���� ���� ���� �Լ� ����־���!

	printf("insert name : ");
	scanf("%s", old_name);
	sprintf(query, "select * from seungmin where name = '%s'", old_name);
	mysql_query(connection, query);
	sql_result = mysql_store_result(connection);
	field = mysql_num_fields(sql_result);

	if ((mysql_fetch_row(sql_result) == NULL))
	{
		while (1)
		{

			printf("�߸� �Է��ϼ̽��ϴ�.\n");

			printf("insert name : ");
			scanf("%s", old_name);
			sprintf(query, "select * from seungmin where name = '%s'", old_name);
			mysql_query(connection, query);
			sql_result = mysql_store_result(connection);
			field = mysql_num_fields(sql_result);

			if (mysql_fetch_row(sql_result) != NULL)
			{
				break;
			}
		}
	}
	while (1)
	{
	printf("[%s] ������\n\n", old_name);
	printf("1. �̸��ٲٱ�  2. ��ȭ��ȣ �ٲٱ�  3. �ּ� �ٲٱ�  4. ����Ȯ��  0. ������\n");
	scanf_s("%d", &menu);
	getchar();

	switch (menu)
	{
	case 1://�̸��ٲٱ�
	{
		printf("�ٲ� �̸� :");
		fgets(contact->name, 20, stdin);
		CHOP(contact->name);

		sprintf(query, "update seungmin set name = '%s' where name = '%s'", contact->name, old_name);
		query_stat = mysql_query(connection, query);
		break;
	}
	case 2:
	{
		printf("�ٲ� ��ȭ :");
		fgets(contact->digit, 20, stdin);
		CHOP(contact->digit);

		sprintf(query, "update seungmin set digit = '%s' where name = '%s'", contact->digit, old_name);
		query_stat = mysql_query(connection, query);
		break;
	}
	case 3:
	{
		printf("�ٲ� �ּ� :");
		fgets(contact->address, 256, stdin);
		CHOP(contact->address);

		sprintf(query, "update seungmin set address = '%s' where name = '%s'", contact->address, old_name);
		query_stat = mysql_query(connection, query);
		break;
	}
	case 4:
	{
		print(connection);		//����ٰ� �װ� ���� ���� ���� �Լ� ����־���!
		break;
	}
	case 0:
	{
		break;
	}
	}
	}

	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}


}