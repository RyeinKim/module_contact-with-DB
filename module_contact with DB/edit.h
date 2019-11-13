void edit_info(_contact *contact);

static int query_stat;
static char query[255];

void edit_info(_contact *contact)
{
	char old_name[20], old_num[30], old_address[256];
	int field, menu;
	printf("insert name : ");
	scanf("%s", old_name);
	sprintf(query, "select * from test where name = '%s'", old_name);
	mysql_query(connection, query);
	sql_result = mysql_store_result(connection);
	field = mysql_num_fields(sql_result);
	while ((sql_row = mysql_fetch_row(sql_result)))
	{
		for (int i = 0; i < field; i++)
			printf("%s\n", sql_row[i]);
		printf("\n");
	}

	printf("1. 이름바꾸기  2. 전화번호 바꾸기  3. 주소 바꾸기\n");
	scanf("%d", &menu);
	getchar();
	switch (menu)
	{
		case 1://이름바꾸기
		{
			printf("바꿀 이름 :");
			fgets(contact->name, 20, stdin);
			CHOP(contact->name);

			sprintf(query, "update test set name = '%s' where name = '%s'", contact->name, old_name);
			query_stat = mysql_query(connection, query);
		}
		case 2:
		{
			printf("바꿀 전화 :");
			fgets(contact->digit, 20, stdin);
			CHOP(contact->digit);

			sprintf(query, "update test set digit = '%s' where name = '%s'", contact->digit, old_name);
			query_stat = mysql_query(connection, query);
		}
		case 3:
		{

			printf("바꿀 주소 :");
			fgets(contact->address, 256, stdin);
			CHOP(contact->address);

			sprintf(query, "update test set address = '%s' where name = '%s'", contact->address, old_name);
			query_stat = mysql_query(connection, query);
		}
	}

	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}
}