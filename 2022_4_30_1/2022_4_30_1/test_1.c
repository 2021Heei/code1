#define _CRT_SECURE_NO_WARNINGS 1
/*
С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���

����������
�������һ������n (1 �� n �� 30)
���������
���һ����������С���ֿ����ߵķ�������
*/

#include <stdio.h>

int stay(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = stay(n);
    printf("%d\n", ret);

    return 0;
}
//
int stay(int n) {
    return n > 2 ? stay(n - 1) + stay(n - 2) : n;
}