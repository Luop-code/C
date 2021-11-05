#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("hehe\n");
//	main();                   //递归常见错误：栈溢出
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
//	//递归
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

//递归解决
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

	//模拟实现了strlen函数
	int len = my_strlen(arr);//数组传过去的不是整个数组，而是第一个元素的地址
	printf("len=%d\n",len);

}