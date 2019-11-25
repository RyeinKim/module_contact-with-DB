void print();

void print() {
	int field;

	MYSQL mysql;
	mysql_init(&mysql);
	connection = mysql_real_connect(&mysql, "reignking.cafe24.com", "reignking", "djaak4250", "reignking", 3306, NULL, 0);

	mysql_query(connection, "select * from bumjin");

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

	mysql_close(&mysql);
}