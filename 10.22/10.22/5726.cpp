#include<stdio.h>
int main()
{
	int n,arr[1000];
	int min = 11;
	int max = 0;
	int res = 0;
	scanf("%d", &n);
	for (int i=0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		res += arr[i];
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%.2f", (res - min - max) / float(n-2));
	return 0;
}