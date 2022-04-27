#define _CRT_SECURE_NO_WARNINGS 1
//简单的关机程序
#include <stdio.h>

int main() {
	char key[20] = "我是神";
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	printf("电脑将在120s后关机，输入“我是神”取消电脑关机!\n");
	while (1) {
		gets(input);
		if (strcmp(input, key) == 0) {
			system("shutdown -a");
			break;
		}
		printf("输入无效，重新输入!\n");
	}
	return 0;
}