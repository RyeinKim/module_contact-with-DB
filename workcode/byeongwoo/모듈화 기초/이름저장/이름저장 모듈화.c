#define _CRT_SECURE_NO_WARNINGS
#include "print.h"
#include "scan.h"
#include "variable.h"
//20192785 ¾Èº´¿ì

void main()
{
	int num = 0;
	vari mem1;

	while (1)
	{
		printf("1. Add, 2. View, 3. Quit\n");
		scanf("%d", &num);

		if (num == 3)
		{
			printf("Program off\n");
			break;
		}

		switch (num)
		{
			case 1:
			{
				print(&mem1);
				break;
			}
			case 2:
			{
				scan(&mem1);
				break;
			}
		}
	}
}