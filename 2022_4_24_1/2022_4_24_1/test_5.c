#define _CRT_SECURE_NO_WARNINGS 1

//�õ������n��쳲��������е�ֵ
#include <stdio.h>

int Fibonacci(int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	int t = Fibonacci(n);
	printf("%d\n", t);

	return 0;
}
//����ʵ�֣��Ҵ�����
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
//����ʵ�֣�����һ������࣬����һ��ѡ����ʽ
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