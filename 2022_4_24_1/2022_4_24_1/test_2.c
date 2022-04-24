//#define _CRT_SECURE_NO_WARNINGS 1
////实现求字符串长度的函数
//
//#include <stdio.h>
//
//int my_strlen1(char* pstr);
//
//int main() {
//	char arr[20] = { 0 };
//	gets(arr);
//	int t = my_strlen(arr);
//
//	printf("%d\n", t);
//	return 0;
//}
////使用临时变量cnt记录字符个数
//int my_strlen1(char* pstr) {
//	int cnt = 0;
//	while (*pstr != '\0') {
//		cnt++;	
//		pstr++;
//	}
//	return cnt;
//}