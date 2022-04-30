#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Lily(int n);

int main() {
    int i = 0;
    scanf("%d", &i);
    if (Lily(i))
        printf("%d\n", i);
    else {
        printf("NO\n");
    }
    /*for (i = 0; i <= 99999; i++) {
        if (Lily(i)) {
            printf("%d ", i);
        }
    }*/

    return 0;
}
int Lily(int n) {
    //计算的总和
    int sum = 0;
    int m = n;
    int a = 0;
    int b = 0;
    //     while(m/10 == 0){
    //         m = m / 10;
    //         cnt++;
    //     }
    //     m = n;
    int t = 1;
    while (m / 10 != 0) {
        if (m == n) {
            a = m % 10;
        }
        else {
            t = t * 10;
            a = a + (m % 10) * t;
        }
        b = m / 10;
        sum += a * b;
        m = m / 10;
    }
    if (sum == n) {
        return 1;
    }
    else {
        return 0;
    }
}
