#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void select_sort(int arr[], int len)//从小到大排
{
	int temp,j;//优化，节省申请内存的次数
	//外部循环
	for (int i = len - 1; i > 0; --i)
	{
		//内部循环
		for (j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			 }
		}
	}
}
int main()
{
	int arr[]{ 7,6,8,2,5,4,3,1 };
	select_sort(arr, 8);
	
	return 0;
}