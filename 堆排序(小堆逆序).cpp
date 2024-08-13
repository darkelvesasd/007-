#include<iostream>
#include<string>
#include<regex>
using namespace std;
void Swap(int *a,int*b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void Adjustup(int*arr,int root,int n)
{
	int parent = root;
	while(parent<=n)
	{
		int child = (2 * parent) + 1;
		if (arr[child + 1] < arr[child]&&child+1<=n)
		{
			child++;
		}
		if (arr[child]<arr[parent] && child <= n)
		{
			Swap(&arr[child],&arr[parent]);
			parent = child;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int*arr,int n)
{
	for (int i=(n-1)/2;i>=0;i--)
	{
		Adjustup(arr,i,n);
	}
	for (int i = 0; i <= n; i++)
	{
		Swap(&arr[0],&arr[n-i]);
		Adjustup(arr, 0, n-i-1);
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	HeapSort(arr, 9);
	return 0;
}
