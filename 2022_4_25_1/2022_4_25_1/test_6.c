	#define _CRT_SECURE_NO_WARNINGS 1
	/*写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和*/

	#include <stdio.h>
	int DigitSum(int n);

	int main() {
		int n = 0;
		scanf("%d", &n);
		int t = DigitSum(n);
		printf("%d\n", t);

		return 0;
	}
	int DigitSum(int n) {
		if (n > 9) {
			return DigitSum(n / 10) + n % 10;
		}
		else {
			return n % 10;
		}
	}