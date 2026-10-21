#include<stdio.h>
int main()
{
	int n, arr1[100], arr2[100],number[100],mon[100],res;
	scanf("%d", &n);
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &arr1[i], &arr2[i]);
		if (n % arr1[i] == 0)
		{
			number[i] = n / arr1[i];
		}
		else
		{
			number[i] = n / arr1[i] + 1;
		}
		mon[i] = number[i] * arr2[i];
	}
	
	res = mon[0];
	if (res > mon[1])
		res = mon[1];
	if (res > mon[2])
		res = mon[2];
		printf("%d", res);
		return 0;
}