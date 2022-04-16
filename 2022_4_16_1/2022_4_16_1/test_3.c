#define _CRT_SECURE_NO_WARNINGS 1
/*求10 个整数中最大值
思路：定义一个变量max初始被第一个整数赋值，使用循环依次与剩余的九个整数比较，
 若大于max，则更新max，否则就与下一个整数比较
*/

#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int max = n;
	int i = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
		}
	}
	printf("max = %d\n", max);

	return 0;
}