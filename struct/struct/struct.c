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

double pow(int n, int k)
{
	if (k < 0)
		return (1 / (pow(n, -k)));
	if (k == 0)
		return 1;
	else
		return n * pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf_s("%d%d", &n, &k);
	double ret = pow(n,k);
	printf("ret=%lf\n", ret);
}