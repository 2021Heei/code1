#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//冒泡排序 - 升序
/*
思路：
对于n个数组元素，要进行n-1趟排序，每一趟中会进行一次或多次两个元素
的比较，每完成一趟，待比较的元素个数便减少一个
对于第1趟，n个元素待排序，进行n-1次两个元素的比较，
对于第2趟，n-1个元素待排序，进行n-2次两个元素的比较，
对于第i趟，n-i-1个元素待比较，进行n-i次两个元素的比较，
(n-1)+(n-2)+...+1 = n*(n-1)/2
故时间复杂度为 O(n^2)
*/
void Bubble_sort(int* arr, int sz);

int main() {
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
void Bubble_sort(int* arr, int sz) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (*(arr + j) > *(arr + j + 1)) {
				int t = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = t;
			}
		}
	}
}