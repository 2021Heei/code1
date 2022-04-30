#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Lily(int n);

int main() {
    int i = 0;
    for (i = 10000; i <= 99999; i++) {
        if (Lily(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
//判断n是否是水仙花数
int Lily(int n) {
    //计算的总和
    int sum = 0;
    //n的备份
    int m = n;
    //从右至左，存放n每次拆分后的右边的数
    int a = 0;
    //     while(m/10 == 0){
    //         m = m / 10;
    //         cnt++;
    //     }
    //     m = n;
    //对应右边的数的位
    int t = 1;
    while (m / 10 != 0) {
//         if (m == n) {
//             a = m % 10;
//         }
//         else {
//             t = t * 10;
//             a = a + (m % 10) * t;
//         }
        a = a + (m % 10) * t;
        t = t *10;
        m = m / 10;
        sum += a * m;
    }
    if (sum == n) {
        return 1;
    }
    else {
        return 0;
    }
}

