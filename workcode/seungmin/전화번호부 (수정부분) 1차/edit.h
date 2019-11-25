int edit_info(_contact* contact);

static int query_stat;
static char query[255];

int edit_info(_contact* contact)
{
	char old_name[20];
	int field, menu, menu1;

	printf("\n[저장된 데이터]\n\n");
	print(connection);		//여기다가 네가 만든 정보 보기 함수 집어넣어줘!

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

			printf("잘못 입력하셨습니다.\n");

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
	printf("[%s] 수정중\n\n", old_name);
	printf("1. 이름바꾸기  2. 전화번호 바꾸기  3. 주소 바꾸기  4. 정보확인  0. 나가기\n");
	scanf_s("%d", &menu);
	getchar();

	switch (menu)
	{
	case 1://이름바꾸기
	{
		printf("바꿀 이름 :");
		fgets(contact->name, 20, stdin);
		CHOP(contact->name);

		sprintf(query, "update seungmin set name = '%s' where name = '%s'", contact->name, old_name);
		query_stat = mysql_query(connection, query);
		break;
	}
	case 2:
	{
		printf("바꿀 전화 :");
		fgets(contact->digit, 20, stdin);
		CHOP(contact->digit);

		sprintf(query, "update seungmin set digit = '%s' where name = '%s'", contact->digit, old_name);
		query_stat = mysql_query(connection, query);
		break;
	}
	case 3:
	{
		printf("바꿀 주소 :");
		fgets(contact->address, 256, stdin);
		CHOP(contact->address);

		sprintf(query, "update seungmin set address = '%s' where name = '%s'", contact->address, old_name);
		query_stat = mysql_query(connection, query);
		break;
	}
	case 4:
	{
		print(connection);		//여기다가 네가 만든 정보 보기 함수 집어넣어줘!
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