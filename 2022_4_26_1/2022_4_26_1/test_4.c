#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	char ch = '\0';
	int a = 0;
	scanf("%d", &a);
	//��ȡһ�еĶ����ַ�ֱ�����з�'\n'
	while ((ch = getchar()) != '\n') {
		;
	}
	int i = 0;
	for (i = 0; i < a; i++) {
		printf("%d", i);
	}

	return 0;
}