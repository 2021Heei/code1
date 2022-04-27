#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Fibonacci(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = Fibonacci(n);

    printf("%d\n", ret);
    return 0;
}
int Fibonacci(int n) {
    if (n > 2) {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
    else {
        return 1;
    }
}

#include <stdio.h>

int Fibonacci(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = Fibonacci(n);

    printf("%d\n", ret);
    return 0;
}
Ñ­»·ÊµÏÖ
int Fibonacci(int n) {
    int a = 1;
    int b = 1;
    int c = 1;
    while (n >= 3) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}