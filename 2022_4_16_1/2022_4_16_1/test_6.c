#define _CRT_SECURE_NO_WARNINGS 1
/*�򵥲�������Ϸ
˼·��ѭ����������Ԫ�أ��������Ԫ�رȽ�
*/

#include <stdio.h>

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 0;
	scanf("%d", &k);
	int i = 0;
	for (i = 0; i < sz; i++) {
		if (k == a[i]) {
			printf("�±�Ϊ%d\n", i);
			break;
		}
	}
	if (i == sz) {
		printf("û�ҵ�\n");
	}
	return 0;
}