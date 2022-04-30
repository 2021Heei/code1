#define _CRT_SECURE_NO_WARNINGS 1
/*KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。从键盘任意输入三个整数表示的分数，编程判断其中的最高分。

数据范围： 0 \le n \le 100 \0≤n≤100 
输入描述：
输入一行包括三个整数表示的分数（0~100），用空格分隔。
输出描述：
输出为一行，即三个分数中的最高分。
示例1
输入：
94 98 99
复制
输出：
99
*/

#include <stdio.h>

int main() {
    int n = 0;
    int max = -1;
    int i = 0;
    for (i = 0; i < 3; i++) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
        }
    }

    printf("%d", max);

    return 0;
}