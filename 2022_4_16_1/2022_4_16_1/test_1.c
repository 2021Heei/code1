#define _CRT_SECURE_NO_WARNINGS 1

/*编写程序数一下 1到 100 的所有整数中出现多少个数字9
思路：对于一个数字如19，先求19的个位是否为9，接着是十位是否是9，如都不为9
就结束判断，进入下一个数字的判断
*/
#include <stdio.h>

int main() {
	int cnt = 0;
	int i = 0;
	//1~100的数
	for (i = 1; i <= 100; i++) {

		//int  flag = 0;
		int x = i;
		//判断每个数字的循环
		while (x != 0) {
			if (x % 10 == 9) {
				//if(flag == 0)
				//	printf("%d\n", i);
				cnt++;
				//flag = 1;

			}
			x = x / 10;
		}

	}
	printf("%d\n", cnt);

	return 0;
}