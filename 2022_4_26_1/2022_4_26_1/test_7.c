#define _CRT_SECURE_NO_WARNINGS 1
/*计算 1!+2!+3!+……+10!*/

#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	//双层循环
	for (i = 1; i <= n; i++) {
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++) {
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);

	return 0;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	//单层循环,ret第i次循环得到i的阶乘，然后加到sum中
	for (i = 1; i <= n; i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("%d\n", sum);

	return 0;
}
