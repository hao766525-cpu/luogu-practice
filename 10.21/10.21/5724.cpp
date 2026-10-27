#include<stdio.h>
int max(int* arr,int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}
int min(int* arr,int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i]< min)
		{
			min= arr[i];
		}
	}
	return min;
}
int main()
{
	int n, a[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int maxnum= max(a,n);
	int minnum=  min(a,n);
	int res = maxnum - minnum;
	printf("%d", res);
}