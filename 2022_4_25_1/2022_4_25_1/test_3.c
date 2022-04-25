#define _CRT_SECURE_NO_WARNINGS 1	
//对n进行单个输出
#include <stdio.h>

void print(int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}
void print(int n) {
	if (n > 9) {
		print(n / 10);
		printf("%d ", n % 10);
	}
	else {
		printf("%d ", n % 10);
	}
}

#include <stdio.h>
int Fac(int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	int t = Fac(n);
	printf("%d\n", t);

	return 0;
}
//递归实现阶乘
int Fac(int n) {
	if (n > 1) {
		return n * Fac(n - 1);
	}
	else {
		return 1;
	}
}

#include <stdio.h>
//循环实现阶乘
int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++) {
		sum *= i;
	}

	printf("%d\n", sum);

	return 0;
}