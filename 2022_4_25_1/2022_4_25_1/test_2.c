#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 100

int main() {
    int a = N;
    printf("%d ", a);

    return 0;
}

#include <stdio.h>
enum color {
    RED,//0
    ORANGE,//1
    YELLOW,
    GREEN,
    BLUE,
    INDIGO,
    PURPLE//6
};
int main() {
    printf("%d\n", RED);
    printf("%d\n", ORANGE);
    printf("%d\n", YELLOW);
    printf("%d\n", GREEN);
    printf("%d\n", BLUE);
    printf("%d\n", INDIGO);
    printf("%d\n", PURPLE);

    return 0;
}