#define _CRT_SECURE_NO_WARNINGS 1
/*简单猜数字游戏
思路：循环遍历数组元素，与待查找元素比较
*/

#include <stdio.h>

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 0;
	scanf("%d", &k);
	int i = 0;
	for (i = 0; i < sz; i++) {
		if (k == a[i]) {
			printf("下标为%d\n", i);
			break;
		}
	}
	if (i == sz) {
		printf("没找到\n");
	}
	return 0;
}