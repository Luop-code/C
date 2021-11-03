#include<stdio.h>
//#include<string.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);	
//}

//strcpy函数
//int main()
//{
//	char arr1[] = "CDUT";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//}

//memset函数，改变内存

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//}

get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("%d ", max);
}