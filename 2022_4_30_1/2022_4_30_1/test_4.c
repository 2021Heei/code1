#define _CRT_SECURE_NO_WARNINGS 1

/*KiKi想判断输入的字符是不是字母，请帮他编程实现。

输入描述：
多组输入，每一行输入一个字符。
输出描述：
针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
示例1
输入：
A
6
复制
输出：
A is an alphabet.
6 is not an alphabet.
*/


#include <stdio.h>

int main() {
    char str[20] = { 0 };
    while (scanf("%s", str) != EOF) {
        if (str[0] != '\n') {
            if (str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'A' && str[0] <= 'Z') {
                printf("%c is an alphabet.\n", str[0]);
            }
            else {
                printf("%c is not an alphabet.\n", str[0]);
            }
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    char ch = 0;
    while (scanf("%c", &ch) != EOF) {
        getchar();
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
            printf("%c is an alphabet.\n", ch);
        }
        else {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}