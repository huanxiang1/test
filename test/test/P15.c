#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//		一维数组的创建

//int main()
//{
//	//创建一个数组 - 存放整形 - 10个
//	//int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5] = {'a','b'};
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7,计算arr4所占空间的大小
//	printf("%d", strlen(arr4));//6,求字符串的长度,也就是'\0'之前的字符个数
//	//1.strlen 和 sizeof没有什么关联
//	//2.strlen 是求字符串长度的-只能针对字符串求长度 - 库函数-使用得引头文件
//	//3.sizeof 计算变量、数组、类型的大小-单位是字节 - 操作符
//
//
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}


//		数组在内存中的布局 - 连续存放

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%p\n", &arr[i]);//打印地址用%p - pointer指针
//	}
//	return 0;
//}


//		二维数组 - 列不可以省略

//int main()
//{
//	//int arr[3][4] = { 1,2,3,4,5 };//三行四列 - 第一行放1234，第二行放5
//	int arr[3][4] = { {1,2,3},{4,5} };//第一行放123，第二行放45
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

//		设计一个函数，实现冒泡排序，将一个整型数组进行排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//确定冒泡排序的次数
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//每一趟冒泡排序，让最大值跑到最后面
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
//	//将arr升序排列
//	bubble_sort(arr,sz);//冒泡排序函数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//		通常 数组名就是首元素地址除了 sizeof（数组名） 和  &数组名

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%p\n", arr);//拿到的是首元素的地址从哪里开始
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//拿到的是首元素的地址从哪里开始
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//拿到的是数组的地址从哪里开始
//	printf("%p\n", &arr+1);
	//1. sizeof(数组名)--数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	//2. &数组名，数组名代表的是整个数组，&数组名，取出的是整个数组的地址
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%d", *arr);
//	return 0;
//}
