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

//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d ", max);
//}

//实参传给形参的时候。形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的

//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y= tmp;
//
//}
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(a, b);//传值调用，形参和实参分别占用不同内存块，对形参的修改不会影响实参
//	printf("a=%d,b=%d",a,b);
//}



//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int* pa = &a;//pa指针变量
//	//*pa=20;//解引用操作
//	Swap2(&a, &b);//传址调用，可以让函数和函数外边的变量建立起真正的联系，即函数内部可直接操作函数外部的变量
//	printf("a=%d,b=%d", a,b);
//
//}


//int is_prime(int n)//是素数返回1
//{
//	int j = 0;
//	for(j=2;j<n;j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}	
//	
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//}


//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2200; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}*/
//
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

                   //本质上arr是一个指针
// int binary_search(int arr[], int k,int sz)
//{
//	 //算法的实现
//	//int sz = sizeof(arr) / sizeof(arr[0]);//这里传过来的是数组arr首个元素的地址
//	 int left = 0;
//	 int right =sz-1 ;
//
//	 while (left <= right)
//	 {
//		 int mid = (left + right) / 2;
//		 if (arr[mid] < k)
//		 {
//			 left = mid+1;
//		 }
//		 else if (arr[mid] > k)
//		 {
//			 right = mid - 1;
//		 }
//		 else
//		 {
//			 return mid;
//		 }
//	 }return -1;
//}
//int main()
//{
//	//二分查找
//	//一个有序数组中查找具体的某个数
//	//如果找到了，返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//
//	}
//	else printf("找到了，下标是%d ", ret);
//}


//void Add(int* p)
//{
//    (*p)++;
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("num=%d\n",num);
//}

//int main()
//{
//    printf("%d ", printf("%d ", printf("%d ", 43)));
//    return 0;
//}

#include "Add.h"
int main()
{
    int a = 10;
    int b = 20;
    int sum = 0;
    sum = Add(a, b);
    printf("%d\n", sum);

}

