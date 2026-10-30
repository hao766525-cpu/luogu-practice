#include<stdio.h>
int main()
{
	int l, m;
	int start = 0;
	int end = 0;
	int res=0;
	scanf("%d %d", &l,&m);
	int arr[10001];
	for (int i = 0; i <= l; i++)
	{
		arr[i] = 1;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &start, &end);
		for (int j = start; j <= end; j++)
		{
			arr[j] = 0;
		}
	}
	for (int i = 0; i <= l; i++)
	{
		res += arr[i];
	}
	printf("%d", res);
}