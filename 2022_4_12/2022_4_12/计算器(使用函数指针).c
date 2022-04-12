#define _CRT_SECURE_NO_WARNINGS 1
// 使用函数指针数组的简单计算器
#include <stdio.h>
void menu() {
	printf("**********************\n");
	printf("****1:加法  2:减法****\n");
	printf("****3:乘法  4:除法****\n");
	printf("****  0:退出程序  ****\n");
	printf("**********************\n");
	printf("**********************\n");
}
int Add(int x, int y) {
	return x + y;
}
int Down(int x, int y) {
	return x - y;
}
int Ult(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}
int main() {
	int select;
	int (*p[5])(int, int) = { 0,Add,Down, Ult, Div };//定义函数指针数组
	int x, y;
	while (1) {
		menu();
		printf("请输入你的选择>:");
		scanf("%d", &select);
		if (select >= 1 && select <= 4) {
			printf("请输入两个数>:");
			scanf("%d %d", &x, &y);
			int ret = p[select](x, y);
			printf("%d\n", ret);
		}
		else if (select == 0) {
			printf("下次再见!\n");
			break;
		}
		else {
			printf("输入错误,请重新输入!\n");
		}
	}

	return 0;
}