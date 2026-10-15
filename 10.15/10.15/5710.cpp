#include<stdio.h>
int main()
{
	int x, score=0;
	int res[10];
	scanf("%d", &x);
	if ((x % 2) == 0)
	{
		score++;
	}
	if (x > 4 && x <= 12) {
		score++;
	}
	if (score == 2)
	{
		res[0] = 1;
	}
	else res[0] = 0;
	if (score == 1 || score == 2)
	{
		res[1] = 1;
	}
	else res[1] = 0;
	if (score == 1)
	{
		res[2] = 1;
	}
	else res[2] = 0;
	if (score == 0)
	{
		res[3] = 1;
	}
	else res[3] = 0;
	printf("%d %d %d %d", res[0], res[1], res[2], res[3]);
	return 0;
}