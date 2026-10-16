#include<stdio.h>
int main()
{
	float m, h;
	scanf("%f %f", &m, &h);
	float bmi = m /( h * h);
	if (bmi < 18.5)
	{
		printf("Underweight");
	}
	else if (bmi >= 18.5 && bmi < 24)
	{
		printf("Nmormal");
	}
	else
	{
		printf("%.6g\n", bmi);
		printf("Overweight");
	}
	return 0;
}