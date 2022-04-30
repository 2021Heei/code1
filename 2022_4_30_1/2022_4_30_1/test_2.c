#define _CRT_SECURE_NO_WARNINGS 1
/*一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。

数据范围：序列长度和序列中的值都满足 1 \le n \le 501≤n≤50
输入描述：
第一行输入一个整数(0≤N≤50)。

第二行输入N个整数，输入用空格分隔的N个整数。

第三行输入想要进行删除的一个整数。

输出描述：
输出为一行，删除指定数字之后的序列*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int* p = NULL;
    p = (int*)malloc(sizeof(int) * n);

    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }
    int del = 0;
    scanf("%d", &del);
    //m记录新数组的大小
    int m = 0;
    for (i = 0; i < n; i++) {
        if (p[i] != del) {
            m++;
        }
    }
    int* q = (int*)malloc(sizeof(int) * m);
    int j = 0;
    for (i = 0; i < n; i++) {
        if (p[i] != del) {
            q[j] = p[i];
            j++;
        }
    }
    for (i = 0; i < m; i++) {
        printf("%d ", q[i]);
    }
    return 0;
}