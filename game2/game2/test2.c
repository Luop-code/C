#include<stdio.h>
#include"game2.h"
void game2()
{
	printf("ɨ��\n");
	//�׵���Ϣ�洢
	//���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11

	//�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ʾ����
	//displayboard(mine, ROW, COL);
	printf("\n");
	displayboard(show, ROW, COL);

	//������
	setmine(mine,ROW,COL);

	displayboard(mine, ROW, COL);

	//ɨ��
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
		printf("��ѡ��:");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game2();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������ѡ��");
				break;
		}
	} while (input);
}
int main()
{
	test();

}