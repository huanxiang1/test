#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//		һά����Ĵ���

//int main()
//{
//	//����һ������ - ������� - 10��
//	//int arr[10] = {1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = {'a','b'};
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7,����arr4��ռ�ռ�Ĵ�С
//	printf("%d", strlen(arr4));//6,���ַ����ĳ���,Ҳ����'\0'֮ǰ���ַ�����
//	//1.strlen �� sizeofû��ʲô����
//	//2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶� - �⺯��-ʹ�õ���ͷ�ļ�
//	//3.sizeof ������������顢���͵Ĵ�С-��λ���ֽ� - ������
//
//
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}


//		�������ڴ��еĲ��� - �������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%p\n", &arr[i]);//��ӡ��ַ��%p - pointerָ��
//	}
//	return 0;
//}


//		��ά���� - �в�����ʡ��

//int main()
//{
//	//int arr[3][4] = { 1,2,3,4,5 };//�������� - ��һ�з�1234���ڶ��з�5
//	int arr[3][4] = { {1,2,3},{4,5} };//��һ�з�123���ڶ��з�45
//	int i = 0;
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//		���һ��������ʵ��ð�����򣬽�һ�����������������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//ȷ��ð������Ĵ���
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//ÿһ��ð�����������ֵ�ܵ������
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp; 
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr��������
//	bubble_sort(arr,sz);//ð��������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//		ͨ�� ������������Ԫ�ص�ַ���� sizeof���������� ��  &������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%p\n", arr);//�õ�������Ԫ�صĵ�ַ�����￪ʼ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//�õ�������Ԫ�صĵ�ַ�����￪ʼ
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//�õ���������ĵ�ַ�����￪ʼ
//	printf("%p\n", &arr+1);
	//1. sizeof(������)--��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2. &����������������������������飬&��������ȡ��������������ĵ�ַ
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%d", *arr);
//	return 0;
//}
