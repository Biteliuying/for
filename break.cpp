#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
// {
//	/*int abc = 2, a = 1, b = 3, c = 5;*/
//	//switch (a)
//	//{
//	//case 0:
//	//	printf("a=1 true\n");
//	//	break;
//	//case 2:
//	//	printf("a=1 true\n");
//	//	break;
//	//default:
//	//	printf("a=1 true\n");
//	//	break;
//	////}
//	//int i = 1, sum = 0;
//	////loop:
//	//if (i <= 100)
//	//{
//	//	sum = sum + i;
//	//	i++;
//	//	goto loop;
//	//}
//	////else
//	//int i = 1, sum = 0;
//	////while (i <= 100)
//	////{
//	////	sum = sum + i;
//	////	i++;
//	////}
//	//do
//	//{
//	//	sum = i + sum;//sum+=i;
//	//	i++;
//	//} while (i <= 10);//����Ϊ��ִ��
//	//printf("sum(1-10)=%d\n", sum);
///*	int i=1, sum = 0;
//	for (;; i++)
//	{
//		sum += i;
//		if (i >= 100)
//	/*	*/	//break;
//	int i, sum;
//	for (i = 1, sum = 0; i <= 100; i++)
//		sum += i;
//	printf("(1-100��sum=%d\n", sum);
//	return 0;
//
//}
int main()
{
	int i, a, p;
	for (a = 1; a < 10; a++)//��������
	{
		for (i = 1; i <= a; i++)//i<=a��������,�������
		{
			p = i * a;
			printf("%d*%d=%d ", i, a, p);
		}
		printf(" \n");
	}
	for (i = 9; i >0; i--)
	{
		for (a = 1; a <=i; a++)
		{
			p = i * a;
			printf("%d*%d=%d ", i, a, p);
		}
		printf(" \n");
	}
}