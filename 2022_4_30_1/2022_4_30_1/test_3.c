#define _CRT_SECURE_NO_WARNINGS 1
/*KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
����������
�������룬ÿһ������һ����ĸ��
���������
���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
ʾ��1
���룺
a
A
Z
����
�����
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