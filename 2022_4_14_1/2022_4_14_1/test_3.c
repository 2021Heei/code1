#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ1000�굽2000��֮�������
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
//�ж��Ƿ�������
int isnum(int x) {
	int i;
	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}