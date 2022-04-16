#define _CRT_SECURE_NO_WARNINGS 1
/*在屏幕上输出9*9乘法口诀表
思路：9*9乘法表，第一行1个一个式子，第九行九个式子，即第i行i个式子。
第i行都有i，第j列都有j。
*/

#include <stdio.h>

int main() {
	int i = 0;
	for (i = 1; i <= 9; i++) {
		int j = 0;
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %2d ", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}