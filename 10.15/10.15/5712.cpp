#include<stdio.h>
#include<string.h>
int main()
{
	int x = 0;
	char fru[100];
	char res[] = "Today,I ate ";
	scanf("%d", &x);
	if (x >= 2)
	{
		strcpy(fru, "apples.");
	}
	else
	{
		strcpy(fru, "apple.");
	}
	printf("%s%d %s",res,x,fru);
	return 0;

}