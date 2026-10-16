#include<stdio.h>
int main()
{
	int n,res=0;
	scanf("%d", &n);
	if (n % 100 == 0)
	{
		if (n % 400 == 0)
		{
			res = 1;
		}
		else res = 0;
	}
	else if (n % 4 == 0)
	{
		res = 1;
	}
	printf("%d", res);
	return 0;
}