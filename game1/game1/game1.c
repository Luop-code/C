//��������Ϸ
#include"game1.h"


void InitBoard(char board[ROW][COL], int row, int col)
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


//void displayboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.��ӡһ�е�����
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//2.��ӡ�ָ���
//		//printf("---|---|---\n");
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}

void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		//1.��ӡһ�е�����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			//2.��ӡ�ָ���
			
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	printf("����ߣ�\n");
	printf("������Ҫ�µ����꣺");
	scanf_s("%d%d", &x, &y);
	//�ж�x��y�ĺϷ���
	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
				break;
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}
 
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	printf("�����ߣ�\n");
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	}
}

//����1��ʾ�������ˣ�����0��ʾ����û��
int isfull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//������
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//������
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];

	//�ж�ƽ��
	if (1 == isfull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}