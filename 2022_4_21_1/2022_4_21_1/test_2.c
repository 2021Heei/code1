/*ʵ�ֺ����ж�year�ǲ������ꡣ*/
/*
˼·�����꣺�ܱ�4�����Ҳ��ܱ�100���������ܱ�400����
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
//�ж��Ƿ�������
int is_leap(int y) {
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 1;
	}
	return 0;
}