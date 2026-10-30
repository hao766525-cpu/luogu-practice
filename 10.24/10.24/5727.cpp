#include<stdio.h>
int main()
{
	int n, i = 1;
	scanf("%d", &n);
	int arr[101];
	arr[0] = n;
	while (n!= 1)
	{
		if (n % 2 != 0)
		{
			n = n * 3 + 1;
			arr[i++] = n;
		}
		else
		{
			n /= 2;
			arr[i++] = n;
		}
	}
	for (int j = i-1; j >=0; j--)
	{
		printf("%d ", arr[j]);
	}
	
}
