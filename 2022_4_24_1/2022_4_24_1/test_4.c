//#define _CRT_SECURE_NO_WARNINGS 1
////用递归求第n个斐波那契数列的值
//
//#include <stdio.h>
//
//int Fibonacci(int n);
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int t = Fibonacci(n);
//	printf("%d\n", t);
//	return 0;
//}
//
//int Fibonacci(int n) {
//	if (n >= 3) {
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//	else {
//		return 1;
//	}
//}