#define _CRT_SECURE_NO_WARNINGS 1

/*KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�

����������
�������룬ÿһ������һ���ַ���
���������
���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������
ʾ��1
���룺
A
6
����
�����
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