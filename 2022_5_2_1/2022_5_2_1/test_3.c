#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int my_strlen1(char* p);
int my_strlen2(char* p);

int main() {
	char str[20] = "hello";
	int ret1 = my_strlen1(str);
	int ret2 = my_strlen2(str);
	printf("%d\n", ret1);
	printf("%d\n", ret2);

	return 0;
}
//求字符串长度
unsigned int my_strlen1(const char* p) {
	int cnt = 0;
	while (*p++) {
		cnt++;
	}
	return cnt;
}
//递归实现
unsigned int my_strlen2(const char* p) {
	if (*p) {
		return 1 + my_strlen2(p + 1);
	}
	else {
		return 0;
	}
}


