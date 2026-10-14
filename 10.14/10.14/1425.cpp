#include<stdio.h>
int main()
{
	int a, b, c, d,res[10];
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (b <= d)
	{
		res[1] = c - a;
		res[2] = d - b;
	}
	else
	{
		res[1] = c - a - 1;
		res[2] = d + 60 - b;
	}
	printf("%d %d", res[1], res[2]);
	return 0;
}