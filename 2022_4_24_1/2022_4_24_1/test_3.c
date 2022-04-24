//#define _CRT_SECURE_NO_WARNINGS 1
//
////不创建临时变量，实现求字符串长度的函数
///*
//思路：不能创建临时变量，考虑使用函数递归调用。
//指针pstr首先指向字符串的第一个元素，若不为'\0'则指针pstr向后移动一位
//作为函数的新参数，代表指向字符串的第二个元素，直到指针指向'\0'时返回0
//*/
//#include <stdio.h>
//
//int my_strlen2(char* pstr);
//
//int main() {
//	char arr[20] = { 0 };
//	gets(arr);
//	int t = my_strlen2(arr);
//
//	printf("%d\n", t);
//	return 0;
//}
//int my_strlen2(char* pstr) {
//	if (*pstr != '\0') {
//		return 1 + my_strlen2(pstr + 1);
//	}
//	else {
//		return 0;
//	}
//}