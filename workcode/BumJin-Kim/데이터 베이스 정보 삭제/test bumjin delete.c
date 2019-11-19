#define _CRT_SECURE_NO_WARNINGS
#include <mysql.h>
#include <string.h>
#include <stdio.h>
#define CHOP(x) x[strlen(x) - 1] = ' '

MYSQL_RES* sql_result;
MYSQL_ROW   sql_row;
MYSQL* connection = NULL, conn;

static int query_stat;
static char query[255];

int main()
{
	char name[10];
	char digit[20];
	char address[256];

	MYSQL mysql;
	mysql_init(&mysql);
	connection = mysql_real_connect(&mysql, "reignking.cafe24.com", "reignking", "djaak4250", "reignking", 3306, NULL, 0);

	if (connection == NULL)
	{
		fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
		return 1;
	}
	else
		printf("성공\n");

	query_stat = mysql_query(connection, "select * from bumjin");

	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}
	else
		printf("성공\n");


	mysql_init(&mysql);

	if (!mysql_real_connect(&mysql, "reignking.cafe24.com", "reignking", "djaak4250", "reignking", 3306, NULL, 0))
		printf("에러\n");
	else
		printf("성공\n");


	printf("이름 :");
	fgets(name, 10, stdin);
	CHOP(name);


	sprintf(query, "delete from bumjin where name = "
		"('%s')",
		name);

	query_stat = mysql_query(connection, query);
	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}

	mysql_free_result(connection);

	mysql_close(&mysql);

}