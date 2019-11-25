#define _CRT_SECURE_NO_WARNINGS
#include <mysql.h>
#include <string.h>
#include <stdio.h>

#pragma once

#define DB_HOST "reignking.cafe24.com"
#define DB_USER "reignking"
#define DB_PASS "djaak4250"
#define DB_NAME "reignking"
#define CHOP(x) x[strlen(x) - 1] = ' '

typedef struct {
	char name[10];
	char digit[20];
	char address[256];
} _contact;

MYSQL_RES* sql_result;
MYSQL_ROW   sql_row;
MYSQL* connection = NULL, conn;

static int query_stat;
static char query[255];