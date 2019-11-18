#include <stdio.h>
#include <mysql.h>
#define CHOP(x) x[strlen(x) - 1] = ' '

void main()
{
	char a[1024], *take[1024];

	MYSQL *mysql[1024];
	mysql_init(&mysql);

	if (!mysql_real_connect(&mysql, "reignking.cafe24.com", "reignking", "djaak4250", "reignking", 3306, NULL, 0))
		printf("error\n");
	else
		printf("success\n");

	printf("N : ");
	fgets(a, 20, stdin);
	CHOP(a);

	sprintf(take, "INSERT INTO example (NAME) VALUES('%s')", a);
	mysql_query(mysql, take);

	mysql_close(&mysql);
}