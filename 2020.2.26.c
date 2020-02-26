#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
/*
//void Lookup(int *arr[3],int i,int j,int a)
//{

	1. 有一个二维数组，数组的每行从左到右是递增的，每列从上到下是递增的，在这样的数组中查找一个数字是否存在。
        1 3 5
	    2 4 6
	    3 5 7
		要求：时间复杂度小于O(N);从右上角开始
	
}

int main()
{问题：到了函数中就不能用arr【】【】，因为变成了指针数组，那怎样将这个算法写成函数呢？
	//1.
	int a;
	printf("请输入你要查找的数字->");
	scanf("%d", &a);
	int arr[][3] = { 1, 3, 5, 2, 4, 6, 3, 5, 7 };
	int i = 2; int j = 2;
	while (j > 0 && i < 3){
		if (a < arr[i-2][j])
		{
			j -= 1;
		}
		else if (a>arr[i-2][j])
		{
			i += 1;
		}
		else
		{
			printf("%d", a);
			break;

		}
		printf("meiyou!");
	}
*/
/*2. 实现一个函数，可以左旋字符串中的k个字符。

例如：

ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
*/
int * Left(int *arr,int str,int k)
{
	for (int i = 0; i < k;i++){//外部循环：左旋几个数
		for (int j = 0; j < str - 1;j++){//内部循环：每一趟旋转几个
			int temp = 0;
			temp = *(arr + 1);
			*(arr + 1) = *arr;
			*arr = temp;

		}
	}
	return arr;
}
int main(){
	int arr[] = {"ABCD"};
	int str = strlen(arr);
	int k = 0;
	printf("请输入你要左旋字母的个数->");
	scanf("%d", &k);
	
	printf("%s", Left(arr, str, k));
	system("pause");
	return 0;
}



/*
int main()
{
	1. 有一个二维数组，数组的每行从左到右是递增的，每列从上到下是递增的，在这样的数组中查找一个数字是否存在。

要求：时间复杂度小于O(N);



2. 实现一个函数，可以左旋字符串中的k个字符。

例如：

ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB


3. 写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

例如：

给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC


4. 练习使用库函数，qsort排序各种类型的数据



5. 模仿qsort的功能实现一个通用的冒泡排序*/
	/*int a[5] = { 5, 4, 3, 2, 1 };
	int *ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));*/

	/*int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1))
	system("pause");
	return 0;
}*/;