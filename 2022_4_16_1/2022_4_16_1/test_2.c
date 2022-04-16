#define _CRT_SECURE_NO_WARNINGS 1
/*计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
思路：分子相同，分母从第二项开始都比前一项大1，用一个变量记录正负号的规则变化
*/
#include <stdio.h>

int main() {
	double sum = 0.0;
	int i;
	double flag = 1.0;
	for (i = 1; i <= 100; i++) {
		sum += flag / i;
		flag = -flag;
	}
	printf("%lf\n", sum);

	return 0;
}