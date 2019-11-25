#include "project main.h"
#include "project delete.h"
#include "project input.h"
#include "project print.h"

void main() {

	int number;
	while (1)
	{


		printf("1. input\n2. delete\n3. print\nYour choice = ");
		scanf("%d", &number);
		getchar();

		switch (number) {
			case 1: {
			input();
			break;
			}
			case 2: {
			delete();
			break;
			}
			case 3: {
			print();
			break;
			}

		}
	}
}