#define _CRT_SECURE_NO_WARNINGS 1

/*��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�*/

#include <stdio.h>
int K_power(int n, int k);

int main() {
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int t = K_power(n, k);
	printf("%d\n", t);

	return 0;
}
int K_power(int n, int k) {
	if (k > 0) {
		return n * K_power(n, k - 1);
	}
	else {
		return 1;
	}
}