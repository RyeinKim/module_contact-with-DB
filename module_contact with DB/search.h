void search(MYSQL *connection);

static char query[255];

void search(MYSQL *connection)
{
	char name[20];
	int field;
	printf("insert name : ");
	scanf("%s", name);
	sprintf(query, "select * from test where name = '%s'", name);
	mysql_query(connection, query);
	sql_result = mysql_store_result(connection);
	field = mysql_num_fields(sql_result);
	while ((sql_row = mysql_fetch_row(sql_result)))
	{
		for (int i = 0; i < field; i++)
			printf("%s\n", sql_row[i]);
		printf("\n");
	}
}