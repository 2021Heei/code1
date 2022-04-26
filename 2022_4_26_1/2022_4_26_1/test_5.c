#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n = 0;
    int i = 0;
    scanf("%d", &n);
again:
    if (i < n) {
        
        printf("%d ", i);
        i = i + 1;
        goto again;
    }

    return 0;
}