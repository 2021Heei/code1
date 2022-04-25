#define _CRT_SECURE_NO_WARNINGS 1
/*创建一个整形数组，完成对数组的操作

实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值*/
/*
逆置的思路：n个元素的数组，第一个元素(下标为0)与最后一个(下标为n-1)交换，
第二个元素(下标为1)与倒数第二个元素(下标为n-2)交换，
第i个元素(下标为i - 1)则与第n-i个元素(n - i)交换

*/
#include <stdio.h>
void init(int* parr, int n);
void print(int* parr, int n);
void _reverse(int* parr, int n);

int main() {
	int arr[10];
	int n = 0;
	n = sizeof(arr) / sizeof(arr[0]);

	init(arr,n);
	print(arr, n);
	int i = 0;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	_reverse(arr, n);
	print(arr, n);

	return 0;
}
//数组初始化
void init(int* parr,int n) {
	int i = 0;
	for(i = 0; i < n; i++){
		*(parr + i) = 0;
	}
}
//数组输出
void print(int* parr, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", *(parr + i));
	}
	printf("\n");
}
//数组逆置
void _reverse(int* parr, int n) {
	int i = 0;
	for (i = 0; i < n / 2; i++) {
		int t = parr[i];
		parr[i] = parr[n - i - 1];
		parr[n - i - 1] = t;
	}
}