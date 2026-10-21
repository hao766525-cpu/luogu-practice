#include<stdio.h>
int main()
{
	int n, arr[100];
	int res = 1000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
			if (arr[i] < res)
				res = arr[i];
	}
	printf("%d", res);
}