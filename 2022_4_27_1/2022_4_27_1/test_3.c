////#define _CRT_SECURE_NO_WARNINGS 1
////#include <stdio.h>
//////函数声明
////int Add_sum(int a, int b);
////
////int main() {
////    int a = 3;
////    int b = 4;
////    int sum = Add_sum(a, b);
////
////    printf("%d\n", sum);
////    return 0;
////}
//////函数定义
////int Add_sum(int a, int b) {
////    return a + b;
////}
//#include <stdio.h>
//
////函数定义
//int Add_sum(int a, int b) {
//    return a + b;
//}
//
//int main() {
//    int a = 3;
//    int b = 4;
//    int sum = Add_sum(a, b);
//
//    printf("%d\n", sum);
//    return 0;
//}

#include <stdio.h>
//函数声明
int Add_sum(int a, int b);

int main() {
    int a = 3;
    int b = 40;
    int sum = Add_sum(a, b);

    printf("%d\n", sum);
    return 0;
}
//函数定义 - 两个整数相加
int Add_sum(int a, int b) {
    return a + b;
}