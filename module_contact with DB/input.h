void input_data(_contact *contact);

static int query_stat;
static char query[255];

void input_data(_contact *contact)
{
	printf("�̸� :");
	fgets(contact->name, 20, stdin);
	CHOP(contact->name);

	printf("��ȭ :");
	fgets(contact->digit, 20, stdin);
	CHOP(contact->digit);

	printf("�ּ� :");
	fgets(contact->address, 256, stdin);
	CHOP(contact->address);

	sprintf(query, "insert into test values "
		"('%s', '%s', '%s')",
		contact->name, contact->digit, contact->address);

	query_stat = mysql_query(connection, query);
	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}
}