#define _CRT_SECURE_NO_WARNINGS
#include <mysql.h>
#include <string.h>
#include <stdio.h>
#define CHOP(x) x[strlen(x) - 1] = ' '

MYSQL_RES* sql_result;
MYSQL_ROW sql_row;
MYSQL* connection = NULL, conn;

static int query_stat;
static char query[255];