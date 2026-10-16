#include<stdio.h>
int main()
{
	int arr[100],tmp;
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	return 0;
}
