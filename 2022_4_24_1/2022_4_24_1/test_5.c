#define _CRT_SECURE_NO_WARNINGS 1

//用迭代求第n个斐波那契数列的值
#include <stdio.h>

int Fibonacci(int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	int t = Fibonacci(n);
	printf("%d\n", t);

	return 0;
}
//迭代实现，且代码简洁
int Fibonacci(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//迭代实现，较上一个不简洁，多了一个选择表达式
int Fibonacci(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		int a = 1;
		int b = 1;
		int c = 0;
		int i = 0;
		for (i = 0; i < n - 2; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}