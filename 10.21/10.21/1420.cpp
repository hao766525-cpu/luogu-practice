#include<stdio.h>
int main()
{
	int n,a[10005];
	int num = 1;
	int max = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if (i > 0 && a[i] == a[i - 1] + 1)
		{
			num++;
			if (num > max)
			{
				max = num;
			}
		}
		else num = 1;
	}
	printf("%d", max);
	return 0;
}