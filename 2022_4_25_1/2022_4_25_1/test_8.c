//#define _CRT_SECURE_NO_WARNINGS 1
///*�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������*/
//
////#include <stdio.h>
////int Fabonacci(int n);
////
////int main() {
////	int n = 0;
////	scanf("%d", &n);
////
////	int t = Fabonacci(n);
////	printf("%d\n", t);
////
////	return 0;
////}
//////�ݹ�ʵ��
////int Fabonacci(int n) {
////	if (n > 2) {
////		return Fabonacci(n - 1) + Fabonacci(n - 2);
////	}
////	else {
////		return 1;
////	}
////}
//
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int t = Fabonacci(n);
//	printf("%d\n", t);
//	
//	return 0;
//}
//int Fabonacci(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}