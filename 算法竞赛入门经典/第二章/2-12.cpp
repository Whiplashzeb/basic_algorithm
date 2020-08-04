/*
数据统计，输入一些整数，求他们的最小值，最大值和平均值
输入包含多组数据
每组数据的第一行是整数个数n，第二行是n个整数，n=0位输入结束标记
*/

#include <stdio.h>

#define INF 10000000

int main() {
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");

    int n;
    int kase = 0;
    while (fscanf(fin, "%d", &n) == 1 && n) {
        int x, min = INF, max = -INF, sum = 0;
        for (int i = 0; i < n; i++) {
            fscanf(fin, "%d", &x);
            if (x > max) {
                max = x;
            }
            if (x < min) {
                min = x;
            }
            sum += x;
        }
        if (kase) {
            printf("\n");
        }
        fprintf(fout, "Case %d: %d\t%d\t%.3f\n", ++kase, min, max, (double) sum / n);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
