#define _CRT_SECURE_NO_WARNINGS 1	
//��n���е������
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
//�ݹ�ʵ�ֽ׳�
int Fac(int n) {
	if (n > 1) {
		return n * Fac(n - 1);
	}
	else {
		return 1;
	}
}

#include <stdio.h>
//ѭ��ʵ�ֽ׳�
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