#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	char ch = '\0';
	int a = 0;
	scanf("%d", &a);
	//读取一行的多余字符直到换行符'\n'
	while ((ch = getchar()) != '\n') {
		;
	}
	int i = 0;
	for (i = 0; i < a; i++) {
		printf("%d", i);
	}

	return 0;
}