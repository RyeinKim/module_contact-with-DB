void del_info(MYSQL *connection);

static char query[255];

void del_info(MYSQL *connection)
{
	char name[20];
	int field;
	printf("insert name : ");
	scanf("%s", name);
	sprintf(query, "delete from test where name = '%s'", name);
	mysql_query(connection, query);
}