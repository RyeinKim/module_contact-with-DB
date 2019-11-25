
void input();

void input() {
	char name[10];
	unsigned char digit[127];
	char address[100];

	MYSQL mysql;
	mysql_init(&mysql);
	connection = mysql_real_connect(&mysql, "reignking.cafe24.com", "reignking", "djaak4250", "reignking", 3306, NULL, 0);

	if (connection == NULL)
	{
		fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
		return 1;
	}
	else
		printf("O\n");

	query_stat = mysql_query(connection, "select * from bumjin");
	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error(sele) : %s", mysql_error(&conn));
		return 1;
	}
	else
		printf("O\n");

	mysql_init(&mysql);

	if (!mysql_real_connect(&mysql, "reignking.cafe24.com", "reignking", "djaak4250", "reignking", 3306, NULL, 0))
		printf("X\n");
	else
		printf("O\n");

	printf("name :");
	fgets(name, 20, stdin);
	CHOP(name);

	printf("digit :");
	fgets(digit, 20, stdin);
	CHOP(digit);

	printf("address :");
	fgets(address, 20, stdin);
	CHOP(address);


	sprintf(query, "insert into bumjin values "
		"('%s','%s','%s')",
		name, digit, address);

	query_stat = mysql_query(connection, query);
	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}

	mysql_free_result(connection);

	mysql_close(&mysql);
}