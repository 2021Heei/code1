#define _CRT_SECURE_NO_WARNINGS 1
/*���� 1!+2!+3!+����+10!*/

#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	//˫��ѭ��
	for (i = 1; i <= n; i++) {
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++) {
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);

	return 0;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	//����ѭ��,ret��i��ѭ���õ�i�Ľ׳ˣ�Ȼ��ӵ�sum��
	for (i = 1; i <= n; i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("%d\n", sum);

	return 0;
}
