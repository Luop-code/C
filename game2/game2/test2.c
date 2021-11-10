#include<stdio.h>
#include"game2.h"
void game2()
{
	printf("扫雷\n");
	//雷的信息存储
	//布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11

	//排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//显示棋盘
	//displayboard(mine, ROW, COL);
	printf("\n");
	displayboard(show, ROW, COL);

	//布置雷
	setmine(mine,ROW,COL);

	displayboard(mine, ROW, COL);

	//扫雷
	findmine(mine,show,ROW,COL);

}

void menu()
{
	printf("*********************\n");
	printf("***1.play  0exit*****\n");
	printf("*********************\n");

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game2();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择");
				break;
		}
	} while (input);
}
int main()
{
	test();

}