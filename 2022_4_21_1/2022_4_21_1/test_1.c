#define _CRT_SECURE_NO_WARNINGS 1
/*实现一个函数，判断一个数是不是素数。

利用上面实现的函数打印100到200之间的素数。
*/
#include <stdio.h>
#include <math.h>

int is_prime(int x);

int main() {
	int i = 0;
	for (i = 101; i <= 200; i += 2) {
		if (is_prime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
//判断x是否是素数
int is_prime(int x) {
	int i = 0;
	int flag = 1;
	if (x <= 1) {
		flag = 0;
	}
	else {
		int k = (int)sqrt(x);
		for (i = 2; i <= k; i++) {
			if (x % i == 0) {
				flag = 0;
				break;
			}
		}
	}
	
	return flag;
}