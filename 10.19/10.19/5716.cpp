#include<stdio.h>
int is_run(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 100 == 0 && x % 400 == 0))
		return 1;
	else return 0;
}
int main()
{
	int y, m,res,ans;
	scanf("%d %d", &y, &m);
	res = is_run(y);
	if (res == 1)
	{
		switch (m)
		{
		case 1:ans = 31; break;
		case 2:ans = 29; break;
		case 3:ans = 31; break;
		case 4:ans=30; break;
		case 5:ans= 31; break;
		case 6:ans= 30; break;
		case 7:ans= 31; break;
		case 8:ans= 31; break;
		case 9:ans= 30; break;
		case 10:ans= 31; break;
		case 11:ans= 30; break;
		case 12:ans= 31; break;
		}
	}
	else
	{
		switch (m)
		{
		case 1:ans= 31; break;
		case 2:ans= 28; break;
		case 3:ans= 31; break;
		case 4:ans= 30; break;
		case 5:ans= 31; break;
		case 6:ans= 30; break;
		case 7:ans= 31; break;
		case 8:ans= 31; break;
		case 9:ans= 30; break;
		case 10:ans= 31; break;
		case 11:ans= 30; break;
		case 12:ans= 31; break;
		}
	}
	printf("%d", ans);
	return 0;
}
