#define _CRT_SECURE_NO_WARNINGS 1

/*���������������������������Լ��

���磺

���룺20 40

�����20*/
#include <stdio.h>

int main() {
	int m, n, k;
	scanf("%d%d", &m, &n);

	//շת�����
	while (n>0) {
		k = m % n;
		m = n;
		n = k;
	}
	printf("%d\n", m);

	return 0;
}