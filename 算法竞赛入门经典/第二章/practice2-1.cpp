/*
水仙花数
ABC = A^3 + B^3 + C^3
*/

#include <stdio.h>
#include <math.h>

int main() {
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                int abc = 100 * a + 10 * b + c;
                int cube = pow(a, 3) + pow(b, 3) + pow(c, 3);
                if (abc == cube) {
                    printf("%d\n", abc);
                }
            }
        }
    }
}