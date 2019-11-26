#include "main.h"
#include "input.h"
#include "start.h"
#include "print.h"
#include "search.h"
#include "delete.h"
#include "edit.h"

int main(void)
{
	while (1)
	{
		int m;
		_contact m1;
		mysql_start();

		printf("1. input data  2. print all  3. search  4. delete  5. edit  6. quit\n");
		printf("type: ");
		scanf("%d", &m);
		getchar();

		if (m == 6) { break; }
		switch (m)
		{
			case 1:
			{
				input_data(&m1);
				break;
			}
			case 2:
			{
				print(connection);
				break;
			}
			case 3:
			{
				search(connection);
				break;
			}
			case 4:
			{
				del_info(connection);
				break;
			}
			case 5:
			{
				edit_info(&m1);
				break;
			}
			default:
			{
				break;
			}
		}
		mysql_close(connection);
	}
}