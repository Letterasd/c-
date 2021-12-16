#include"game.h"
void game()
{
	char board[HANG][LIE] = { 0 };//ϣ��ȫ�����ǿո�
	Initboard(board, HANG, LIE);//��ʼ������
	Displayboard(board, HANG, LIE);//��ӡ����
	char ret = '0';
	while (1)
	{
		//�������
		Playmove(board, HANG, LIE);
		Displayboard(board, HANG, LIE);
		//�����ж��Ƿ��Ѿ�������Ϸ ��Ҫ�жϺ���
		ret = judge(board, HANG,LIE);//����Ƿ���һ��ֵ
		//'*'���Ӯ
		//'#'����Ӯ
		//'O'ƽ��
		//'C'����
		//��������
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
		printf("���Ӯ\n");
	if(ret=='#')
		printf("����Ӯ\n");
	if (ret == 'O')
		printf("ƽ��\n");
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
			//1.��ӡһ������
			int j = 0;
			for (j = 0; j < lie; j++)
			{
				/*	printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
				printf(" %c ", board[i][j]);
				if (j < lie - 1)
					printf("|");
			}
			printf("\n");		//2.��ӡ�ָ���
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
		printf("�����;");
		while (1)
		{
			printf("������Ҫ�µ����� �����������ո� ��1 1\n");
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
					printf("�����ѱ�ռ��");
				}
			}
			else
			{
				printf("����Ƿ���������");
			}
		}
	}
	void Computermove(char board[HANG][LIE], int row, int col)
	{
		int x = 0;
		int y = 0;
		printf("������:\n");
		while (1)
		{
			x = rand() % 3;//ʹ����ֵΪ0-2
			y = rand() % 3;//ʹ����ֵΪ0-2
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';//����Ҫ��ʾ�ѱ�ռ��
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
		//�������
		for (i = 0; i < hang; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//ע��ո����
				return board[i][1];//ϸ�� ����һ�������Ϳ�����
		}
		//�������
		for (i = 0; i < lie; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[1][i]!=' ')
				return board[1][i];//ͬ��
		}
		//�����Խ���
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
		//���û��return ���ж��Ƿ�ƽ��,���Ƿ�����
		if (1 == judgefull(board, hang, lie))
		{
			return 'O';
		}
		return 'C';
	}