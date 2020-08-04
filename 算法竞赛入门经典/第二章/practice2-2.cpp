/*
韩信点兵
 让士兵先后以三人一排，五人一排，七人一排的变换队形，然后看每种队形排尾的人数
 输入包含多组数据，每组数据包含三个非负整数a,b,c，表示每种队形排尾的人数
 输出总人数的最小值（或报告无解）
 已知总人数不小于10，不超过100
 输入到文件结束为止
*/
#define LOCAL

#include <stdio.h>
#include <math.h>

int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int kase = 0;
    int a, b, c;
    while (scanf("%d", &a) == 1 && scanf("%d", &b) == 1 && scanf("%d", &c) == 1) {
        bool find = false;
        for (int x = 10; x <= 100; x++) {
            if (x % 3 == a && x % 5 == b && x % 7 == c) {
                printf("case %d: %d\n", ++kase, x);
                find= true;
                break;
            }
        }
        if (!find) {
            printf("case %d: No answer\n", ++kase);
        }
    }
}