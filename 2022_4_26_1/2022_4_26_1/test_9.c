#define _CRT_SECURE_NO_WARNINGS 1
/*��һ�����������в��Ҿ����ĳ������n�������ֲ��ң�*/

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
			printf("�ҵ��ˣ��±�Ϊ %d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("û�ҵ�\n");
	}

	return 0;
}