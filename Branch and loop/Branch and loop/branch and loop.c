#include<stdio.h>

//判断一个数奇偶数
/*
int main()
{
	int a;
	printf("input a num:");
	scanf_s("%d",&a);
	if(a>=1)
	  if (a % 2 == 0)
	{
		printf("%d is  an even", a);

	}
	  else {
		  printf("%d is an odd", a);
	  }
	
}
*/
//输出1-100间的奇数
/*
int main() 
{
	int b = 1;
	while (b <= 100)
	{
		if (b % 2 == 1)
			printf("%d ", b);
		b++;
	}
}*/
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//
//		}
//	case 4:m++;
//		break;
//		default:
//		break;
//		
//	}
//	printf("m=%d,n=%d\n", m, n);
//}
//int main()
//{
//int i = 1;
//while(i < 10)
//{
//	if (i == 5)
//		continue;//continue终止本次循环，即后面的代码不执行，直接跳转到while进行下一次循环判断
//	printf("%d ", i);
//	i++;
//}
//}

//int main()
//{
//	int ch = 0;
//	//crtl + z
//	//EOF:end of file,-1
//	while (((ch = getchar()) != EOF))
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("输入密码：");
//	scanf_s("%s",password,20);
        //缓冲区还有一个“\n”
//	while ((ch =getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（y/n）：");
//	ret = getchar();
//	if (ret == 'y'||ret=='Y')
//	{
//		printf("success\n");
//	}
//	else {
//		printf("failed");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <' 0'|| ch>'9')
//			continue;
//		putchar(ch);
//	}
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i<=10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//不要随便省略
//
//		{
//			printf("hehe ");
//		}
//	}
//
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k=0; i++, k++)
//		k++;
//	
//}

//int main()
//{
//	int i = 1;
//	do {
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}

//计算n的阶乘

//int main()
//{
//	
//	int i = 0;
//	int n = 0;
//	
//	int ret = 1;
//	scanf_s("%d ",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d ", ret);
//	return 0;
//}


//int main()
//{
//
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d ", sum);
//}

