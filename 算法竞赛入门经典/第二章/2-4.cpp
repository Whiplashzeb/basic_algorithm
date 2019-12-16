/*
输入n，计算s=1! + 2! + 3! + ... + n!的末六位 n < 10^6
*/

#include <stdio.h>
#include <time.h>

const int MOD = 1000000;

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    if (n > 25) {
        n = 25;
    }
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial = j * factorial % MOD; // 要计算只包含加减乘法的整数表达式除以n的余数，可以在每步计算后对n取余，结果不变
        }
        sum = (sum + factorial) % MOD;
    }
    printf("%d\n", sum);
    printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
    return 0;
}
