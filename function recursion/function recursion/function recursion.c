#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("hehe\n");
//	main();                   //�ݹ鳣������ջ���
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	//�ݹ�
//	print(num);
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ���
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//
//	//ģ��ʵ����strlen����
//	int len = my_strlen(arr);//���鴫��ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n",len);
//
//}


//int facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//
//	}return ret;
//}
//
//int fac2(int n)
//{
//	if (n < 1)
//		return 1;
//	else
//		return n * fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	//ret=facl(n);//ѭ���ķ�ʽ
//	ret = fac2(n);//�ݹ�
//	printf("%d\n", ret);
//	return 0;
//}

//int count = 3;
////쳲�������
//int fb(int n)
//{
//	if (n == 3)//�����������ظ����˶��ٴ�
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	
//	else
//		return fb(n - 1) + fb(n - 2);
//
//}

//int fb2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	haha:
//	scanf_s("%d", &n);
//	ret = fb2(n);
//	printf("��%d��쳲���������%d\n",n, ret);
//	//printf("%d\n",count);
//	goto haha;
//}