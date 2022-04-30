#define _CRT_SECURE_NO_WARNINGS 1
/*
小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？

输入描述：
输入包含一个整数n (1 ≤ n ≤ 30)
输出描述：
输出一个整数，即小乐乐可以走的方法数。
*/

#include <stdio.h>

int stay(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = stay(n);
    printf("%d\n", ret);

    return 0;
}
//
int stay(int n) {
    return n > 2 ? stay(n - 1) + stay(n - 2) : n;
}