#define _CRT_SECURE_NO_WARNINGS 1
//������������
#include <stdio.h>

void swap(int* a, int* b);

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;
}
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}