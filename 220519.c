#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,4,3,2,1 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//  把所有值异或在一起
	//	int ret = j ^ arr[i]; //原理:0^a=a,a^b^b=a，a异或2次任何数，结果还是a
	//}
	//返回ret就是只出现了一次的那个数
	for (i = 0; i < sz; i++)
	{
		int count = 2;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count--;
			}
		}
		if (count == 1)
		{
			printf("找到了，下标是%d\n", i);
			break;
		}
	}
	return 0;
}