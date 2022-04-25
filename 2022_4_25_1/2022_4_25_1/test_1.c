#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print() {
    static int a = 1;
    a++;
    printf("%d ", a);
}
int main() {
    int i = 0;
    for (i = 0; i < 5; i++) {
        print();
    }
    return 0;
}