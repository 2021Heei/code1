#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    unsigned int n = 0;
    scanf("%u", &n);
    int ret = Factorial(n);

    printf("%d\n", ret);
    return 0;
}
int Factorial(unsigned int n) {
    if (n > 1) {
        return n * Factorial(n - 1);
    }
    else {
        return 1;
    }
}

#include <stdio.h>

int main() {
    int n = 0;
    int ret = 1;
    int i = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        ret = ret * i;
    }

    printf("%d\n", ret);
    return 0;
}