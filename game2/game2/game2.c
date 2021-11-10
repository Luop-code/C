#include"game2.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int  count = EASY_COUNT;//�����׵ĸ���
	while (count)
	{
		int x = rand() % row+1;//1-9�������
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//'1'-'0'=1
int get_mine_count(char mine[ROWS][COLS], int x,int y)
{
	  return  mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x +1][y+1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10=71
	while (win<row*col-EASY_COUNT)
	{
	printf("�������Ų��׵����꣺");
	scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
		  //����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				displayboard(mine, row, col);
				break;
			}
			//�����ף�����x��y������Χ������
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				displayboard(show, row, col);
				win++;
			}
		}
		 else
		{
		printf("��������Ƿ������������룺\n");

		}
		if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�� �����׳ɹ�\n");
			displayboard(mine, row, col);
		}

	}

}