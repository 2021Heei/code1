#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int My_strlen1(char* pstr);
int My_strlen2(char* pstr);

int main() {
	char str[20] = { 0 };
	gets(str);
	int t1 = My_strlen1(str);
	printf("%d\n", t1);
	int t2 = My_strlen2(str);
	printf("%d\n", t2);

	return 0;
}
//������ʱ����ʵ�����ַ�������
int My_strlen1(char* pstr) {
	int cnt = 0;
	while (*pstr != '\0') {
		cnt++;
		pstr++;
	}
	return cnt;
}

//��������ʱ�������ַ������� - �ݹ�
int My_strlen2(char* pstr) {
	if (*pstr != '\0') {
		return 1 + My_strlen2(pstr + 1);
	}
	else {
		return 0;
	}
}