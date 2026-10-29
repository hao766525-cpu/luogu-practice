#include<stdio.h>
int main()
{
	int arr1[101],arr2[101];
	int temp,i=0;
	while (scanf("%d",&temp)==1&&temp!=0)
	{
		arr1[i] = temp;
		i++;
	}
		for (int j = 0; j < i-1;j++)
	{
			arr2[j] = arr1[i - j - 1];
			printf("%d ", arr2[j]);
	}
		return 0;
}
