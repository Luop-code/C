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

//strcpy����
//int main()
//{
//	char arr1[] = "CDUT";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//}

//memset�������ı��ڴ�

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

//ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�ε�

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
//	Swap(a, b);//��ֵ���ã��βκ�ʵ�ηֱ�ռ�ò�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
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
//	//int* pa = &a;//paָ�����
//	//*pa=20;//�����ò���
//	Swap2(&a, &b);//��ַ���ã������ú����ͺ�����ߵı�����������������ϵ���������ڲ���ֱ�Ӳ��������ⲿ�ı���
//	printf("a=%d,b=%d", a,b);
//
//}


//int is_prime(int n)//����������1
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
//	//��ӡ100-200֮�������
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

                   //������arr��һ��ָ��
// int binary_search(int arr[], int k,int sz)
//{
//	 //�㷨��ʵ��
//	//int sz = sizeof(arr) / sizeof(arr[0]);//���ﴫ������������arr�׸�Ԫ�صĵ�ַ
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
//	//���ֲ���
//	//һ�����������в��Ҿ����ĳ����
//	//����ҵ��ˣ�������������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//
//	}
//	else printf("�ҵ��ˣ��±���%d ", ret);
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

