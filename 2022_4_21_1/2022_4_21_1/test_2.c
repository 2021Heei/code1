/*实现函数判断year是不是润年。*/
/*
思路：闰年：能被4整除且不能被100整除，或能被400整除
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int year = 0;
	scanf("%d", &year);
	if (is_leap(year)) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}
//判断是否是闰年
int is_leap(int y) {
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 1;
	}
	return 0;
}