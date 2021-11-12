#include<stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	char* pc = &a;
//	*pc = 0;
//	//*pa = 0;
//	
//	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	//int*p ，*p能够访问4个字节
//	//char*p ， *p能够访问一个字节
//
//	//printf("%p\n", pa);
//	printf("%p\n", pc);
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	//指针类型决定了：指针走一步走多远（指针的步长）
//	//int* p,p+1--->4
//	//char* p,p+1--->1
//	//double* p,p+1--->8     指针类型决定了，对指针解引用的时候有多大权限，即能操作几个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		*(p + i) = 1;
//}

//野指针

//int main()
//{
//	//int a;//局部变量不初始化，默认随机值
//	int* p;//局部指针变量，被初始化随机值
//	
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;//指针越界，也即是野指针
//	}
//
//}

//int* test()
//{
//	int a = 10;
//	return &a;//虽然返回了地址，但该函数结束，空间内存就会还给系统
//}
//int main()
//{
//	int* p = test();  
//	*p = 20;    //指针指向的空间释放，野指针
//   
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//int* p = NULL;//空指针
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	//*pa = 10;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;;
//	}
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[0] - &arr[9]);    //指针-指针的绝对值，得到的是中间的元素个数，大地址减小地址
//	printf("%d\n", & arr[9] - &ch[0]);    //error
//
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ====== %p\n", p + i, &arr[i]);
//	}
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;       //ppa就是二级指针
//	int** * pppa = &ppa;
//	//...
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//}


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	//整型数组-存整型
	//字符数组-存字符
	//指针数组-存指针

	int* arr[3] = { &a,&b,&c }; //整型指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * (arr[i]));
	}
}