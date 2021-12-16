#include "game.h"
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("«Î—°‘Ò:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("game start\n");
			game();
			break;
		case 0:
			printf("exited\n");
			break;
		default:
			printf("please choose again\n");
			break;
		}
	} while (input != 0 && 1);
}
int main()
{
	test();
	return 0;
}