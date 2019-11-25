void print(MYSQL* connection);

void print(MYSQL* connection)
{
	int field;
	mysql_query(connection, "select * from seungmin");
	sql_result = mysql_store_result(connection);
	field = mysql_num_fields(sql_result);
	while ((sql_row = mysql_fetch_row(sql_result)))
	{
		for (int i = 0; i < field; i++)
		{
			printf("%s\n", sql_row[i]);
		}
		printf("-------------------");
		printf("\n");
	}
}
