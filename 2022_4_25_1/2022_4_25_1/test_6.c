	#define _CRT_SECURE_NO_WARNINGS 1
	/*дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��*/

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