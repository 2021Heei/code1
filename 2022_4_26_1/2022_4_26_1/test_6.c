#define _CRT_SECURE_NO_WARNINGS 1
/*¼ÆËã nµÄ½×³Ë*/
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++) {
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}