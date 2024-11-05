#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Count(char* arr)
{
	int sum = 0;
	while (*arr++)
	{
		sum++;
	}
	return sum;
}
int main()
{
	char arr1[100] = {0};
	char arr2[100] = {0};
	//scanf("%99s", arr1);
	gets(arr1);
	int ret = Count(arr1);
	//printf("%d\n", ret);
	//printf("%s\n", arr1);
	char* left = arr1;
	char* right = arr1 + ret-1;
	char* start = arr2;
	while (left < right)
	{
		if (*left == '*')
		{
			left++;
		}
		if (*right == '*')
		{
			right--;
		}
		if ((*left != '*') && (*right != '*'))
		{
			break;
		}
	}
	while (left <= right)
	{
		*(start++ )= *(left++);
	}
	printf("%s", arr2);
	return 0;
}