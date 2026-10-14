#include<stdio.h>
int main()
{
	float t= 0;
	int n = 0;
	scanf("%f %d", &t, &n);
	printf("%.3f\n",(t / n));
	printf("%d", 2 * n);
	return 0;
}