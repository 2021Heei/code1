#define _CRT_SECURE_NO_WARNINGS 1
/*������A�е����ݺ�����B�е����ݽ��н�����������һ����*/

#include <stdio.h>

int main() {
	int a[10] = { 0 };
	int b[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 10; i++) {
		int t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%d ", b[i]);
	return 0;
}