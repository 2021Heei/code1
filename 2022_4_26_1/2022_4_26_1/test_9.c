#define _CRT_SECURE_NO_WARNINGS 1
/*在一个有序数组中查找具体的某个数字n。（二分查找）*/

#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (n < arr[mid]) {
			right = mid - 1;
		}
		else if (n > arr[mid]) {
			left = mid + 1;
		}
		else {
			printf("找到了，下标为 %d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("没找到\n");
	}

	return 0;
}