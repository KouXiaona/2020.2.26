#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
/*
//void Lookup(int *arr[3],int i,int j,int a)
//{

	1. ��һ����ά���飬�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ����ģ��������������в���һ�������Ƿ���ڡ�
        1 3 5
	    2 4 6
	    3 5 7
		Ҫ��ʱ�临�Ӷ�С��O(N);�����Ͻǿ�ʼ
	
}

int main()
{���⣺���˺����оͲ�����arr������������Ϊ�����ָ�����飬������������㷨д�ɺ����أ�
	//1.
	int a;
	printf("��������Ҫ���ҵ�����->");
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
/*2. ʵ��һ�����������������ַ����е�k���ַ���

���磺

ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
*/
int * Left(int *arr,int str,int k)
{
	for (int i = 0; i < k;i++){//�ⲿѭ��������������
		for (int j = 0; j < str - 1;j++){//�ڲ�ѭ����ÿһ����ת����
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
	printf("��������Ҫ������ĸ�ĸ���->");
	scanf("%d", &k);
	
	printf("%s", Left(arr, str, k));
	system("pause");
	return 0;
}



/*
int main()
{
	1. ��һ����ά���飬�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ����ģ��������������в���һ�������Ƿ���ڡ�

Ҫ��ʱ�临�Ӷ�С��O(N);



2. ʵ��һ�����������������ַ����е�k���ַ���

���磺

ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB


3. дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

���磺

����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC


4. ��ϰʹ�ÿ⺯����qsort����������͵�����



5. ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������*/
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