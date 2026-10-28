#include<stdio.h>
int main()
{
	int n,num=1;
	int res = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%02d", num);
			num++;
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <n-1-i ; j++)
		{
			printf("  ");
		}
		for (int m = 0; m < i + 1; m++)
		{
			printf("%02d", res);
			res++;
		}
		printf("\n");
	}
}