#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int sco = 0;
    scanf("%d", &sco);

    if (sco >= 750) {
        printf("��ǿ����\n");
    }
    else if (sco >= 500) {
        printf("��ʦ\n");
    }
    else if (sco >= 350) {
        printf("��ʦ\n");
    }
    else if (sco >= 100) {
        printf("שʯ\n");
    }
    else if (sco >= 75) {
        printf("����\n");
    }
    else if (sco >= 50) {
        printf("�ƽ�\n");
    }
    else if (sco >= 30) {
        printf("����\n");
    }
    else {
        printf("��ͭ\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int sco = 0;
    scanf("%d", &sco);

    switch (sco) {
    case 1: printf("����һ��������ҫ\n"); break;
    case 2: printf("���ڶ���LOL\n"); break;
    case 3: printf("��������ԭ��\n"); break;
    case 4:	printf("�����ģ�ԭ��\n"); break;
    case 5: 
    case 6: printf("��������������\n"); break;
    case 7: printf("�����죺ԭ��\n"); break;
    default:printf("hello world\n"); break;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i = 1;
    int n = 0;
    scanf("%d", &n);

    while (i <= n) {
        i��ż���ͽ�������ѭ��
        if (i % 2 == 0) {
            printf("hehe\n");
            i = i + 1;
            continue;
        }
        i����ż����i����n-1���뿪whileѭ��
        else if (i == n - 1) {
            break;
        }
        printf("hihi\n");
        �ı�i��ֵ
        i = i + 1;
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;
    int n = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        //i��ż���ͽ�������ѭ��
        if (i % 2 == 0) {
            printf("hehe\n");
            continue;
        }
        //i����ż����i����n-1���뿪whileѭ��
        else if (i == n - 1) {
            break;
        }
        printf("hihi\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;
    int n = 0;
    scanf("%d", &n);

    do {
        //i��ż���ͽ�������ѭ��
        if (i % 2 == 0) {
            printf("hehe\n");
            i = i + 1;
            continue;
        }
        //i����ż����i����n-1���뿪whileѭ��
        else if (i == n - 1) {
            break;
        }
        printf("hihi\n");
        i = i + 1;
    } while (i <= n);
    return 0;
}