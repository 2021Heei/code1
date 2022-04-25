#define _CRT_SECURE_NO_WARNINGS 1
/*����һ���������飬��ɶ�����Ĳ���

ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ*/
/*
���õ�˼·��n��Ԫ�ص����飬��һ��Ԫ��(�±�Ϊ0)�����һ��(�±�Ϊn-1)������
�ڶ���Ԫ��(�±�Ϊ1)�뵹���ڶ���Ԫ��(�±�Ϊn-2)������
��i��Ԫ��(�±�Ϊi - 1)�����n-i��Ԫ��(n - i)����

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
//�����ʼ��
void init(int* parr,int n) {
	int i = 0;
	for(i = 0; i < n; i++){
		*(parr + i) = 0;
	}
}
//�������
void print(int* parr, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", *(parr + i));
	}
	printf("\n");
}
//��������
void _reverse(int* parr, int n) {
	int i = 0;
	for (i = 0; i < n / 2; i++) {
		int t = parr[i];
		parr[i] = parr[n - i - 1];
		parr[n - i - 1] = t;
	}
}