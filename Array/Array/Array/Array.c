#include<stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[]={'a','b','c'};
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机数，strlen要找到\0才会停下,返回无符号数
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d]=%p\n", i,&arr[i]);
//}


int main()
{
	int arr[3][4] = { {1,2,3} ,{4,5} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}