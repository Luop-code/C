//测试三子棋游戏

#include<stdio.h>
#include"game1.h"
void menu()
{
	printf("********************\n");
	printf("****1.play  0.exit********\n");
	printf("********************\n");
}

void game1()
{
	char ret = 0;
	//数组存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	InitBoard(board, ROW, COL);//初始化棋盘
	displayboard(board,ROW,COL);//打印棋盘
	//下棋
	while (1)
	{
		//玩家下棋
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret=iswin(board,ROW,COL);
		if (ret!= 'C')
		{
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret = iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game1();
			break;

		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;

		}
	} while (input);
}

int main()
{
	test();

}