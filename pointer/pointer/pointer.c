#include<stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	char* pc = &a;
//	*pc = 0;
//	//*pa = 0;
//	
//	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//	//int*p ��*p�ܹ�����4���ֽ�
//	//char*p �� *p�ܹ�����һ���ֽ�
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
//	//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//	//int* p,p+1--->4
//	//char* p,p+1--->1
//	//double* p,p+1--->8     ָ�����;����ˣ���ָ������õ�ʱ���ж��Ȩ�ޣ����ܲ��������ֽ�
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

//Ұָ��

//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�����ֵ
//	int* p;//�ֲ�ָ�����������ʼ�����ֵ
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
//		p++;//ָ��Խ�磬Ҳ����Ұָ��
//	}
//
//}

//int* test()
//{
//	int a = 10;
//	return &a;//��Ȼ�����˵�ַ�����ú����������ռ��ڴ�ͻỹ��ϵͳ
//}
//int main()
//{
//	int* p = test();  
//	*p = 20;    //ָ��ָ��Ŀռ��ͷţ�Ұָ��
//   
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//int* p = NULL;//��ָ��
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
//	printf("%d\n", & arr[0] - &arr[9]);    //ָ��-ָ��ľ���ֵ���õ������м��Ԫ�ظ��������ַ��С��ַ
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
//	int* * ppa = &pa;       //ppa���Ƕ���ָ��
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

	//��������-������
	//�ַ�����-���ַ�
	//ָ������-��ָ��

	int* arr[3] = { &a,&b,&c }; //����ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * (arr[i]));
	}
}