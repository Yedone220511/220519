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
	//  ������ֵ�����һ��
	//	int ret = j ^ arr[i]; //ԭ��:0^a=a,a^b^b=a��a���2���κ������������a
	//}
	//����ret����ֻ������һ�ε��Ǹ���
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
			printf("�ҵ��ˣ��±���%d\n", i);
			break;
		}
	}
	return 0;
}