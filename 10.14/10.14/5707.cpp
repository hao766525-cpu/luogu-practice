#include <stdio.h>

int main() {
    int s, v;
    scanf("%d%d", &s, &v);

    int road = (s + v - 1) / v;
    int need = road + 10;
    int start = 8 * 60 - need;

    if (start < 0) {
        start += 24 * 60;
    }

    printf("%02d:%02d\n", start / 60, start % 60);
    return 0;
}