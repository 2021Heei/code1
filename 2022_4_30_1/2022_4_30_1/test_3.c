#define _CRT_SECURE_NO_WARNINGS 1
/*KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
输入描述：
多组输入，每一行输入一个字母。
输出描述：
针对每组输入，输出单独占一行，输出字母的对应形式。
示例1
输入：
a
A
Z
复制
输出：
A
a
z
*/

#include <stdio.h>

int main() {
    char ch = 0;
    while (scanf("%c", &ch) != EOF) {
        getchar();
        if (ch >= 'a' && ch <= 'z') {
            ch = ch + 'A' - 'a';
        }
        else {
            ch = ch + 'a' - 'A';
        }

        printf("%c\n", ch);
    }

    return 0;
}

int main() {
    char str[100] = { 0 };

    while (scanf("%s", str) != EOF) { 
        if (str[0] != '\n') {
            if (str[0] >= 'a' && str[0] <= 'z') {
                str[0] = str[0] + 'A' - 'a';
            }
            else if(str[0] >= 'A' && str[0] <= 'Z') {
                str[0] = str[0] + 'a' - 'A';
            }
        }
        if(str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'A' && str[0] <= 'Z')
        printf("%c\n", str[0]);
    }

    return 0;
}