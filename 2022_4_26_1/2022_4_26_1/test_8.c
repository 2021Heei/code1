#define _CRT_SECURE_NO_WARNINGS 1
/*编写代码，演示多个字符从两端移动，向中间汇聚*/

//#include <stdio.h>
//#include <windows.h>
//#define N 100
//int main() {
//	char str[N] = { 0 };
//	int sz = sizeof(str) / sizeof(str[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		str[i] = ' ';
//	}
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right) {
//		str[left++] = '#';
//		str[right--] = '#';
//		for (i = 0; i < sz; i++) {
//			printf("%c", str[i]);
//		}
//		printf("\n");
//		Sleep(500);
//		system("cls");
//	}
//	for (i = 0; i < sz; i++) {
//		printf("%c", str[i]);
//	}
//	
//	return 0;
//}

#include <stdio.h>
#include <windows.h>

void print(char* str, int sz);

int main() {
	char str1[] = "My name is weihe! Nice to meet you";
	char str2[] = "##################################";
	int sz = sizeof(str1) / sizeof(str1[0]);
	int i = 0;

	int left = 0;
	int right = sz - 1;
	while (left <= right) {
		str1[left] = str2[left];
		str1[right] = str2[right];
		left++;
		right--;
		print(str1, sz);
		Sleep(500);
		system("cls");
	}
	print(str1, sz);

	return 0;
}
void print(char* str, int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}