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

		printf("type:");
		scanf("%d", &m);
		getchar();

		//if (m == 4) { break; }
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
			}
			case 5:
			{
				edit_info(&m1);
			}
			default:
			{
				break;
			}
		}
		mysql_close(connection);
	}
}