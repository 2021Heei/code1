#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void menu() {
	printf("**********************\n");
	printf("****1:�ӷ�  2:����****\n");
	printf("****3:�˷�  4:����****\n");
	printf("****  0:�˳�����  ****\n");
	printf("**********************\n");
	printf("**********************\n");
}
int cacu(int (*p)(int, int)) {//����һ������cacu��ʹ�ú���ָ����������ļ��㺯��
	int x, y;
	printf("��������������>:");
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
		printf("���������ѡ��>:");
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
			printf("�����˳����´��ټ�!\n");
			break;
		default:
			break;
		}
		if (select == 0)
			break;
	}
	return 0;
}