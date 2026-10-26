#include<stdio.h>
int is_zs(int n)
{
	int i = 2;
	int res = 0;
	if (n == 2) return 1;
	for (; i<n; i++)
	{
		if ((n % i) != 0)
			res = 1;
		else return 0;
	}
	return res;
}
int main()
{
	int L = 0;
	int i = 2;
	int res = 0;
	int num = 0;
	scanf("%d", &L);
	while(res<L)
	{
		if (res + i > L)
			break;
		if (is_zs(i))
		{
			printf("%d\n", i);
				res += i;
				num++;
		}
		i++;
	}
	printf("%d", num);
	return 0;

}
