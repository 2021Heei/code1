#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//交换变量x与y的值
void swap(int x, int y);

int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}
void swap(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

#include <stdio.h>
交换变量x与y的值
void swap(int* px, int* py);

int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    swap(&a, &b);

    printf("a = %d b = %d\n", a, b);
    return 0;
}
void swap(int* px, int* py) {
    int t = *px;
    *px = *py;
    *py = t;
}