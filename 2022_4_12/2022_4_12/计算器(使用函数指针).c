#define _CRT_SECURE_NO_WARNINGS 1
// ʹ�ú���ָ������ļ򵥼�����
#include <stdio.h>
void menu() {
	printf("**********************\n");
	printf("****1:�ӷ�  2:����****\n");
	printf("****3:�˷�  4:����****\n");
	printf("****  0:�˳�����  ****\n");
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
	int (*p[5])(int, int) = { 0,Add,Down, Ult, Div };//���庯��ָ������
	int x, y;
	while (1) {
		menu();
		printf("���������ѡ��>:");
		scanf("%d", &select);
		if (select >= 1 && select <= 4) {
			printf("������������>:");
			scanf("%d %d", &x, &y);
			int ret = p[select](x, y);
			printf("%d\n", ret);
		}
		else if (select == 0) {
			printf("�´��ټ�!\n");
			break;
		}
		else {
			printf("�������,����������!\n");
		}
	}

	return 0;
}