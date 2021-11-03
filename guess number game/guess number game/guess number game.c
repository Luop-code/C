#include<stdlib.h>
#include<time.h>
#include<stdio.h>

//猜数字游戏
//电脑生成随机数，猜数字

void menu()
{
	printf("*********************\n");
	printf("***1.play   0.exit*****\n");
	printf("*********************\n");
}

void game()
{
	int guess = 0;

	//时间戳设置随机数的生成起始点：当前计算机的时间-计算机的起始时间（1970.1.1.0：0：0）=（xx）秒

	int ret = rand() % 100 + 1;//生成随机数1-100之间
	printf("%d\n", ret);
	while (1)
	{
	
		printf("请猜数字");
		scanf_s("%d", &guess);//注意scanf输入格式
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜，猜对了");
			break;
		}
	}

}
int main()

{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择: ");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			//printf("退出\n");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
	return 0;
}

//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	printf("%d ", random_num);
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf_s("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//	
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
