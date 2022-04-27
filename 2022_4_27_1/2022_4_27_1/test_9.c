#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int My_strlen(char *pstr);

int main() {
    char str[] = "Hello world!";

    int ret = My_strlen(str);

    printf("%d\n", ret);
    return 0;
}
int My_strlen(char *pstr) {
    if (*pstr != '\0') {
        return 1 + My_strlen(pstr + 1);
    }
    else {
        return 0;
    }
}