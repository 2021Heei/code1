#define _CRT_SECURE_NO_WARNINGS 1

/*给定两个数，求这两个数的最大公约数

例如：

输入：20 40

输出：20*/
#include <stdio.h>

int main() {
	int m, n, k;
	scanf("%d%d", &m, &n);

	//辗转相除法
	while (n>0) {
		k = m % n;
		m = n;
		n = k;
	}
	printf("%d\n", m);

	return 0;
}