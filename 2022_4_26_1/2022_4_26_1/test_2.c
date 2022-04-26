#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//ð������ - ����
/*
˼·��
����n������Ԫ�أ�Ҫ����n-1������ÿһ���л����һ�λ�������Ԫ��
�ıȽϣ�ÿ���һ�ˣ����Ƚϵ�Ԫ�ظ��������һ��
���ڵ�1�ˣ�n��Ԫ�ش����򣬽���n-1������Ԫ�صıȽϣ�
���ڵ�2�ˣ�n-1��Ԫ�ش����򣬽���n-2������Ԫ�صıȽϣ�
���ڵ�i�ˣ�n-i-1��Ԫ�ش��Ƚϣ�����n-i������Ԫ�صıȽϣ�
(n-1)+(n-2)+...+1 = n*(n-1)/2
��ʱ�临�Ӷ�Ϊ O(n^2)
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