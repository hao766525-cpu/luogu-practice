#include<stdio.h>
#include<string.h>
int main()
{
	char res[10];
	scanf("%s", res);
	int num = strlen(res);
	for (int i = num - 1; i >= 0; i--)
	{
		printf("%c",res[i]);
	}
	return 0;

}