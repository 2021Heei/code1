#define _CRT_SECURE_NO_WARNINGS 1
//�򵥵Ĺػ�����
#include <stdio.h>

int main() {
	char key[20] = "������";
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	printf("���Խ���120s��ػ������롰������ȡ�����Թػ�!\n");
	while (1) {
		gets(input);
		if (strcmp(input, key) == 0) {
			system("shutdown -a");
			break;
		}
		printf("������Ч����������!\n");
	}
	return 0;
}