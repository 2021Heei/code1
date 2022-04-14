#define _CRT_SECURE_NO_WARNINGS 1
//打印1000年到2000年之间的闰年
#include <stdio.h>
#include <math.h>
int isnum(int x);

int main() {
	int i;

	for (i = 100; i < 200; i++) {
		if (isnum(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}
//判断是否是闰年
int isnum(int x) {
	int i;
	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}