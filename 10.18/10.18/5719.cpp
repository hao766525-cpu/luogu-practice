#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    float sum1 = 0;
    float sum2 = 0;
    int number1 = 0;
    int number2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sum1 += i;
            number1 += 1;
        }

        else
        {
            sum2 += i;
            number2 += 1;
        }
    }
    printf("%.1f %.1f", sum1 / number1, sum2 / number2);
    return 0;
}
