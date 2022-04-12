#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void menu() {
	printf("**********************\n");
	printf("****1:加法  2:减法****\n");
	printf("****3:乘法  4:除法****\n");
	printf("****  0:退出程序  ****\n");
	printf("**********************\n");
	printf("**********************\n");
}
int cacu(int (*p)(int, int)) {//定义一个函数cacu，使用函数指针调用其他的计算函数
	int x, y;
	printf("请输入两个整数>:");
	scanf("%d %d", &x, &y);
	return p(x, y);
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
	int ret = 0;
	while (1) {
		menu();
		printf("请输入你的选择>:");
		scanf("%d", &select);
		switch (select) {
		case 1:
			cacu(Add);
			printf("ret=%d\n", ret);
			break;
		case 2:
			cacu(Down);
			printf("ret=%d\n", ret);
			break;
		case 3:
			cacu(Ult);
			printf("ret=%d\n", ret);
			break;
		case 4:
			cacu(Div);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("程序退出，下次再见!\n");
			break;
		default:
			break;
		}
		if (select == 0)
			break;
	}
	return 0;
}