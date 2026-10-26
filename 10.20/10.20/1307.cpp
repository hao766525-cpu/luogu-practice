#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 读入原始数字

    int rev = 0;     // 用来存放反转后的新数字

    while (n != 0) {
        // 核心步骤：
        // 1. n % 10 取出最后一位数字
        // 2. rev * 10 把已有的数字整体左移一位（腾出个位）
        // 3. 把取出的数字加到个位上
        rev = rev * 10 + n % 10;

        // 把 n 的最后一位砍掉
        n = n / 10;
    }

    printf("%d\n", rev); // 输出反转后的结果

    return 0;
}