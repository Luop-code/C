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
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "hello";
	//int len = strlen(arr);
	//printf("%d\n", len);

	//ģ��ʵ����strlen����
	int len = my_strlen(arr);//���鴫��ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len=%d\n",len);

}