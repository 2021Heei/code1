#define _CRT_SECURE_NO_WARNINGS 1
/*��10 �����������ֵ
˼·������һ������max��ʼ����һ��������ֵ��ʹ��ѭ��������ʣ��ľŸ������Ƚϣ�
 ������max�������max�����������һ�������Ƚ�
*/

#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int max = n;
	int i = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
		}
	}
	printf("max = %d\n", max);

	return 0;
}