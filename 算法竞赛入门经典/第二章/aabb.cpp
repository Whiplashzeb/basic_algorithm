/*
输出全部形如aabb的4位完全平方数
*/
#include <stdio.h>
#include <math.h>

int main() {
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            int n = 1100 * a + 11 * b;
            int m = floor(sqrt(n) + 0.5);
            if (m * m == n) {
                printf("%d\n", n);
            }
        }
    }
    return 0;
}
