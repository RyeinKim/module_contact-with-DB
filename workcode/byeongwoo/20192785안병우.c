#include <stdio.h>
#include <mysql.h>

void main()
{
	MYSQL mysql;
	mysql_init(&mysql);
		if (!mysql_real_connect(&mysql, "reignking.cafe24.com", "reignking", "djaak4250", "reignking", 3306, NULL, 0))
			printf("error");
		else
			printf("succese");
		mysql_close(&mysql);
}