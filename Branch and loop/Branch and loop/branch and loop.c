#include<stdio.h>
//�ж�һ�����Ƿ�Ϊ����
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
//���1-100�������
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
//		continue;//continue��ֹ����ѭ����������Ĵ��벻ִ�У�ֱ����ת��while������һ��ѭ���ж�
//	printf("%d ", i);
//	i++;
//}
//}

int main()
{
	int ch = 0;
	//crtl + z
	//EOF:end of file,-1
	while (((ch = getchar()) != EOF))
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/
}