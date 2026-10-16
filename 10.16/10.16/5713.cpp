#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%s", (5 * n < 3 * n + 11) ? ("Local") : ("Luogu"));
	return 0;
}