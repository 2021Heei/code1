#define _CRT_SECURE_NO_WARNINGS 1
/*二分查找

作业内容
编写代码在一个整形有序数组中查找具体的某个数

要求：找到了就打印数字所在的下标，找不到则输出：找不到。

思路：
1.每次都用有序数组中中间的元素与要查找的数比较，若相等就找到了，
2.若数组中间元素大于待查找元素，说明待查找元素在当前数组的左边，
接下来只在数组左半边的长度查找
3.若数组中间元素小于待查找元素，则在数组右半边的长度查找
4.如此重复步骤2、3，直到数组剩余最后一个元素，若与待查找元素比较之后相等则
输出下标。否则输出找不到。

找到有序数组初始下标left，结束下标right，中间元素下标用middle
*/

#include <stdio.h>

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,99 };
	int left = 0;
	//数组的长度大小
	int sz = sizeof(a) / sizeof(a[0]);
	int right = sz;
	int middle = 0;
	//待查找元素
	int n;
	scanf("%d", &n);

	while (left <= right) {
		middle = (left + right) / 2;
		if (a[middle] > n){
			right = middle - 1;
		}
		else if (a[middle] < n) {
			left = middle + 1;
		}
		else {
			printf("下标为%d\n", middle);
			break;
		}
	}
	//左下标大于右下标时，没有意义了
	if (left > right)
		printf("找不到\n");

	return 0;
}