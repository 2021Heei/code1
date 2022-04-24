//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////输入一个无符号整数，按每一位从左向右顺序输出
////使用递归
//void bit_print(unsigned int n);
//
//int main() {
//	unsigned int n = 0;
//	scanf("%d", &n);
//	bit_print(n);
//	return 0;
//}
//
//void bit_print(unsigned int n) {
//	if (n > 9) {
//		bit_print(n / 10);
//	}
//	printf("%d ", n % 10);
//}