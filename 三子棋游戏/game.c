#include"game.h"
void game()
{
	char board[HANG][LIE] = { 0 };//希望全部都是空格
	Initboard(board, HANG, LIE);//初始化棋盘
	Displayboard(board, HANG, LIE);//打印棋盘
	char ret = '0';
	while (1)
	{
		//玩家下棋
		Playmove(board, HANG, LIE);
		Displayboard(board, HANG, LIE);
		//必须判断是否已经结束游戏 需要判断函数
		ret = judge(board, HANG,LIE);//最好是返回一个值
		//'*'玩家赢
		//'#'电脑赢
		//'O'平局
		//'C'继续
		//电脑下棋
		if(ret!='C')
		{
		break;
		}
		Computermove(board, HANG, LIE);
		Displayboard(board, HANG, LIE);
		ret = judge(board, HANG, LIE);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	if(ret=='#')
		printf("电脑赢\n");
	if (ret == 'O')
		printf("平局\n");
}

void menu()
{
	    printf("***********************\n");
		printf("1 to play |*| 0 to exit\n");
		printf("***********************\n");
}

	void Initboard(char board[HANG][LIE], int row, int col)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				board[i][j] = ' ';
			}
		}
	}
	void Displayboard(char board[HANG][LIE], int hang, int lie)
	{
		int i = 0;
		for (i = 0; i < hang; i++)
		{
			//1.打印一行数据
			int j = 0;
			for (j = 0; j < lie; j++)
			{
				/*	printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
				printf(" %c ", board[i][j]);
				if (j < lie - 1)
					printf("|");
			}
			printf("\n");		//2.打印分割行
				if (i < hang- 1)
				{
					for (j = 0; j < lie; j++)
					{
						printf("---");
						if(j<lie-1)
						printf("|");
					}
					printf("\n");
				}
		}
	}
	void Playmove(char board[HANG][LIE], int row, int col)
	{
		int x = 0;
		int y = 0;
		printf("玩家走;");
		while (1)
		{
			printf("请输入要下的坐标 两坐标间带个空格 如1 1\n");
			scanf_s("%d %d", &x, &y);

			if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
				{
					printf("坐标已被占用");
				}
			}
			else
			{
				printf("坐标非法重新输入");
			}
		}
	}
	void Computermove(char board[HANG][LIE], int row, int col)
	{
		int x = 0;
		int y = 0;
		printf("电脑走:\n");
		while (1)
		{
			x = rand() % 3;//使返回值为0-2
			y = rand() % 3;//使返回值为0-2
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';//不需要提示已被占用
				break;
			}
		}
	}
	int judgefull(char board[HANG][LIE], int hang, int lie)
	{
		int j = 0; int i = 0;
		for (i = 0; i < hang; i++)
		{
			for (j = 0; j < lie; j++)
			{
				if (board[i][j] == ' ')
				{
					return 0;
				}
			}
		}
		return 1;
	}
	char judge(char board[HANG][LIE], int hang, int lie)
	{
		int i = 0;
		//三行相等
		for (i = 0; i < hang; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//注意空格情况
				return board[i][1];//细节 返回一个函数就可以了
		}
		//三列相等
		for (i = 0; i < lie; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[1][i]!=' ')
				return board[1][i];//同理
		}
		//两个对角线
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
		//如果没有return 就判断是否平局,即是否满了
		if (1 == judgefull(board, hang, lie))
		{
			return 'O';
		}
		return 'C';
	}