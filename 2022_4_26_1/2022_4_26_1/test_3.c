#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int sco = 0;
    scanf("%d", &sco);

    if (sco >= 750) {
        printf("最强王者\n");
    }
    else if (sco >= 500) {
        printf("宗师\n");
    }
    else if (sco >= 350) {
        printf("大师\n");
    }
    else if (sco >= 100) {
        printf("砖石\n");
    }
    else if (sco >= 75) {
        printf("铂金\n");
    }
    else if (sco >= 50) {
        printf("黄金\n");
    }
    else if (sco >= 30) {
        printf("白银\n");
    }
    else {
        printf("青铜\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int sco = 0;
    scanf("%d", &sco);

    switch (sco) {
    case 1: printf("星期一：王者荣耀\n"); break;
    case 2: printf("星期二：LOL\n"); break;
    case 3: printf("星期三：原神\n"); break;
    case 4:	printf("星期四：原神\n"); break;
    case 5: 
    case 6: printf("星期六：崩坏三\n"); break;
    case 7: printf("星期天：原神\n"); break;
    default:printf("hello world\n"); break;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i = 1;
    int n = 0;
    scanf("%d", &n);

    while (i <= n) {
        i是偶数就结束本次循环
        if (i % 2 == 0) {
            printf("hehe\n");
            i = i + 1;
            continue;
        }
        i不是偶数且i等于n-1就离开while循环
        else if (i == n - 1) {
            break;
        }
        printf("hihi\n");
        改变i的值
        i = i + 1;
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;
    int n = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        //i是偶数就结束本次循环
        if (i % 2 == 0) {
            printf("hehe\n");
            continue;
        }
        //i不是偶数且i等于n-1就离开while循环
        else if (i == n - 1) {
            break;
        }
        printf("hihi\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;
    int n = 0;
    scanf("%d", &n);

    do {
        //i是偶数就结束本次循环
        if (i % 2 == 0) {
            printf("hehe\n");
            i = i + 1;
            continue;
        }
        //i不是偶数且i等于n-1就离开while循环
        else if (i == n - 1) {
            break;
        }
        printf("hihi\n");
        i = i + 1;
    } while (i <= n);
    return 0;
}