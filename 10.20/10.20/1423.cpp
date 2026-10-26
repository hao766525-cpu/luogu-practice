#include<stdio.h>
float step(int i)
{
	while (i > 0)
	{
		return 2 + 0.98*step(i - 1);
	}
	return 0;
}
int main()
{
	int i,res=0;
	float s;
	scanf("%f", &s);
	while (step(res) < s)
	{
		res++;
	}
	printf("%d", res);
	return 0;
}

