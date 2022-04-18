#define _CRT_SECURE_NO_WARNINGS 1
//¥Ú”°≥À∑®±Ì
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++) {
		int j = 0;
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %2d ", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}