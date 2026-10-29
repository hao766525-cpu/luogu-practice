#include<stdio.h>
int main()
{
	int n,arr[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		scanf("%d", &arr[i]);
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			num++;
		}
		printf("%d ", num);
	}
}