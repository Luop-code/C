#include<stdio.h>


//��λ������
//int main()
//{
//	int a = -1;
//
//	//  >>�����Ʋ��������ƶ����Ƕ�����λ��
//	int b=a >> 1;
//
//	//1.�������ƣ��ұ߶�������߲�ԭ����λ����������λ��0��������1������λ�����λ  ��
//	//2.�߼����ƣ��ұ߶�������߲�0
//
//	printf("%d", b);
//}


//int main()
//{
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢���롣    ��������������ͬ��
//	//�洢���ڴ���ǲ���,Ҳ����˵�ƶ����ǲ���
//	int a = -1;
//	//10000000000000000000000000000001:ԭ��
//	//11111111111111111111111111111110:���룬����λ���䣬����λ��λȡ��
//	//11111111111111111111111111111111������=����+1
//	//
//	int b = a >> 2;
//	printf("%d\n", b);
//}

//int main()
//{
//	int a = -5;
//	//���Ʋ���������߶������ұ߲�0
//	int b = a << 1;
//	printf("%d ", b);
//}

//ע�⣺������λ���������Ҫ�ƶ�����λ������Ǳ�׼δ����ģ����磺int num=10��num>>-1,error

//int main()
//{
//	//&  ��λ�룬������λ
//	//int a = 3;       //011
//	//int b = 5;		// 101	
//	//int c = a & b;   //001   
//	//printf("%d ", c);
//
//	// |��λ��
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//printf("%d ", c);
//
//	// ^ ��λ���    ��Ӧ�Ķ�����λ����ͬΪ0������Ϊ1
//	int a = 3;   
//	int b = 5;
//	int c = a ^ b; 
//	printf("%d ", c);
//}


//��������ʱ������ʵ���������Ľ���

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//�Ӽ���-���ܻ����
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//���ķ���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//
//	printf("%d,%d ", a, b);
//}

//��һ�������洢���ڴ��ж�������1�ĸ���
//int main()
//
//{
//	int num = 1;
//	int i = 0;
//	int count = 0;
//
//		scanf_s("%d", &num);
//
//		//num&1==1 
//		for (i = 0; i < 32; i++)
//		{
//			if (((num >> i) & 1) == 1)
//				count++;
//		}
//		printf("��������1�ĸ�����%d\n", count);
//
//
//	////ͳ��num�Ĳ������м���1, ���㷨��ȱ��
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//		num = num / 2;
//	//	}
//	//}
//}


//int main()
//{
//	int a = 10;
//
//	a = a + 2;
//	a += 2;  //���ϸ�ֵ��
//
//	a = a >> 1;
//	a >>= 1;
//
//	a = a & 1;
//	a &= 1;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a; //ȡ��ַ������
//	*p=20;			// �����ò����� 
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//
//	//sizeof���������ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a)); //4
//	printf("%d\n", sizeof(int)); //4
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(char*));//4
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//�������ͣ�ȥ�����֣�ʣ�µľ������������
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//}

//int main()
//{
//
//	//int a = 0;
//	//printf("%d\n", ~a);//~��λȡ��
//
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a & (~(1 << 2));
//	printf("%d", a);//11
//}

//int main()
//{
//	int a = 10;
//
//	//printf("%d\n", ++a);//ǰ��++����++����ʹ��
//
//	printf("%d\n", a++);//����++����ʹ�ã���++
//}


//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d ", a);
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//ָ����� ��ָ�� 4�ֽڻ���8�ֽڣ�32ƽ̨Ĭ��4�ֽ�
//}
//void test2(char ch[]) //�����Ǹ�ָ��
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);  // ���鴫�Σ���������Ԫ�صĵ�ַ����ָ�����
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//�߼��룬�����߳�����0���ұ߾Ͳ���������ˡ�
//							//ͬ�����߼���Ҳ��ˣ�ǰ��������棬����Ͳ�����
//
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("%d\n", b);
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//}

//������һ���ṹ������-struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1����ʼ��
//	struct Stu s1 = { "����",20,"20180601012" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);   //�ṹ��ָ��->��Ա��
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//	//printf("%s\n", (*ps).id);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//}


//��ʽ����ת��
//c������������������������ȱʡ�������͵ľ��������е�.Ϊ�˻���������, ����ʽ�е��ַ��Ͷ����Ͳ�������ʹ��֮ǰ��ת��Ϊ��ͨ����, ����ת����Ϊ��������.
//���������ǰ��ձ������������͵ķ���λ������������.
//int main()
//{
//	//char���ͣ�����a��bֻ�ܷ�һ���ֽ�
//	//��������ʱ����λ�������λ
//
//	char a = 3;    //00000000000000000000000000000011
//				   //00000011  - a
//
//	char b = 127;  	//0000000000000000000000001111111
//					//01111111  - b
//	                //a��b������
//					// ���շ���λ��������
//					//00000011 
//					//0000000000000000000000000000011
//					//01111111
//					//0000000000000000000000001111111
//					
//					//0000000000000000000000010000010:c
//					// 
//					//�ӷ�������ɺ󣬽�������ضϣ��ٴ洢��c��
//	
//	char c = a + b; //10000010  -c
//					//1111111111111111111111110000010 -����
//					//1111111111111111111111110000001 -����
//					//1000000000000000000000001111110 -ԭ�� -126
//	printf("%d\n", c); 
//}


//��������ʵ��
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//}


//int main()
//{
//	char c = 1;
//	//%u����ʮ���ƴ�ӡ�޷�������
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//}

