#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>

//�ж�һ������ż��
/*
int main()
{
	int a;
	printf("input a num:");
	scanf_s("%d",&a);
	if(a>=1)
	  if (a % 2 == 0)
	{
		printf("%d is  an even", a);

	}
	  else {
		  printf("%d is an odd", a);
	  }
	
}
*/
//���1-100�������
/*
int main() 
{
	int b = 1;
	while (b <= 100)
	{
		if (b % 2 == 1)
			printf("%d ", b);
		b++;
	}
}*/
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//switch�������γ������ʽ
//	{
//	case 1: m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//
//		}
//	case 4:m++;
//		break;
//		default:
//		break;
//		
//	}
//	printf("m=%d,n=%d\n", m, n);
//}
//int main()
//{
//int i = 1;
//while(i < 10)
//{
//	if (i == 5)
//		continue;//continue��ֹ����ѭ����������Ĵ��벻ִ�У�ֱ����ת��while������һ��ѭ���ж�
//	printf("%d ", i);
//	i++;
//}
//}

//int main()
//{
//	int ch = 0;
//	//crtl + z
//	//EOF:end of file,-1
//	while (((ch = getchar()) != EOF))
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("�������룺");
//	scanf_s("%s",password,20);
        //����������һ����\n��
//	while ((ch =getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�y/n����");
//	ret = getchar();
//	if (ret == 'y'||ret=='Y')
//	{
//		printf("success\n");
//	}
//	else {
//		printf("failed");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <' 0'|| ch>'9')
//			continue;
//		putchar(ch);
//	}
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i<=10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//��Ҫ���ʡ��
//
//		{
//			printf("hehe ");
//		}
//	}
//
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k=0; i++, k++)
//		k++;
//	
//}

//int main()
//{
//	int i = 1;
//	do {
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}

//����n�Ľ׳�

//int main()
//{
//	
//	int i = 0;
//	int n = 0;
//	
//	int ret = 1;
//	scanf_s("%d ",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d ", ret);
//	return 0;
//}


//int main()
//{
//
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d ", sum);
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 10;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d ",i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���");
//
//	return 0;
//
//}


//�۰�����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10};
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//�����±�
//	int right = sz-1;//�����±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("found ,it is %d:", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}

//###################����ַ��������м��ƶ�
//int main()
//{
//	char arr1[] = "welcome to CDUT!";
//	char arr2[] = "################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//
//
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣ1s�������ͷ�ļ���Windows.j=h��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ��������ͷ�ļ���stdlib.h��  ��cls�������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//
//}

//########ģ���û���½����ֻ�ܵ�½����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf_s("%s", password,20);
//		if (strcmp(password ,"123456")==0)//�ȺŲ��ܱȽ������ַ�����Ӧ��ʹ�ÿ⺯��strcmp
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("����������������˳�");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d ", n);
//
//}

//�ж�����
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2200; year++)
//	{
//		
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//}

//100��200������
int main()
{
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{

		for (j = 2; j <=sqrt( i); j++)
		{
			if (i % j == 0)
				break;
		}

		if (j >sqrt(i))
		{
			count++;
			printf("%d ", i);

		}
	}
	printf("\ncount=%d ", count);
	return 0;
}