#define _CRT_SECURE_NO_WARNINGS 1
/*һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣

���ݷ�Χ�����г��Ⱥ������е�ֵ������ 1 \le n \le 501��n��50
����������
��һ������һ������(0��N��50)��

�ڶ�������N�������������ÿո�ָ���N��������

������������Ҫ����ɾ����һ��������

���������
���Ϊһ�У�ɾ��ָ������֮�������*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int* p = NULL;
    p = (int*)malloc(sizeof(int) * n);

    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }
    int del = 0;
    scanf("%d", &del);
    //m��¼������Ĵ�С
    int m = 0;
    for (i = 0; i < n; i++) {
        if (p[i] != del) {
            m++;
        }
    }
    int* q = (int*)malloc(sizeof(int) * m);
    int j = 0;
    for (i = 0; i < n; i++) {
        if (p[i] != del) {
            q[j] = p[i];
            j++;
        }
    }
    for (i = 0; i < m; i++) {
        printf("%d ", q[i]);
    }
    return 0;
}