//������������Ϸ

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
	//�������߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	InitBoard(board, ROW, COL);//��ʼ������
	displayboard(board,ROW,COL);//��ӡ����
	//����
	while (1)
	{
		//�������
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=iswin(board,ROW,COL);
		if (ret!= 'C')
		{
			break;
		}
		//��������
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game1();
			break;

		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (input);
}

int main()
{
	test();

}