#define _CRT_SECURE_NO_WARNINGS 1
/*����Ļ�����9*9�˷��ھ���
˼·��9*9�˷�����һ��1��һ��ʽ�ӣ��ھ��оŸ�ʽ�ӣ�����i��i��ʽ�ӡ�
��i�ж���i����j�ж���j��
*/

#include <stdio.h>

int main() {
	int i = 0;
	for (i = 1; i <= 9; i++) {
		int j = 0;
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %2d ", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}