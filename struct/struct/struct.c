#include<stdio.h>


//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	//一个函数求a的二进制码里有多少个1
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & n - 1;
//		count++;
//	}
//	return count;
//}
//
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_bit_one(tmp);//tmp里有几个1，说明m和n有几位不同
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d\n", count);
//}

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf_s("%d", &m);
//	print(m);
//}

//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j<=i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print_table(n);
//}

#include<string.h>
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}

//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(strlen(arr+1)>=2)
//	reverse_string(arr+1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s ", arr);
//}

//int digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return digitsum(num / 10) + num % 10;
//
//	}
//	else {
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	int ret = digitsum(num);
//	printf("%d ", ret);
//}

//double pow(int n, int k)
//{
//	if (k < 0)
//		return (1 / (pow(n, -k)));
//	if (k == 0)
//		return 1;
//	else
//		return n * pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	double ret = pow(n,k);
//	printf("ret=%lf\n", ret);
//}

//stuct结构体关键字   stu结构体标签  struct stu结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}s1,s2,s3;  //三个全局的结构体变量

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct stu s1 = { "罗澎",20,"1656483310","man" };//局部变量
//	Stu s2;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello world";
//	struct T t = { "hehe",{100,'w',"hello bit",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//}
//
//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}Stu;
//void print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tel:%s\n", tmp.tel);
//	printf("sex:%s\n", tmp.sex);
//}
//void print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tel: %s\n", ps->tel);
//	printf("sex: %s\n", ps->sex);
// }
//int main()
//{
//	Stu s = { "李四",40,"15512345678","man" };
//	print1(s);
//	print2(&s);   //首选第二种，函数传参时，参数需要压栈的，如果结构体过大，参数压栈的系统开销大，导致性能下降。所以，结构体传参传地址
//}


int add(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = add(a, b);

}