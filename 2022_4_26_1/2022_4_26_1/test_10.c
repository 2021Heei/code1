#define _CRT_SECURE_NO_WARNINGS 1
/*��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
��ʾ��¼�ɣ�������ξ�����������˳�����*/

#include <stdio.h>
#include <string.h>

#define N 20
int main() {
	char key[] = "hello123456";
	char input[N] = { 0 };
	int i = 0;
	for(i = 0; i < 3; i++){
		gets(input);
		if (strcmp(input, key) == 0) {
			printf("��¼�ɹ�!\n");
		}
		else if(i != 2){
			printf("�����������������!\n");
		}
	}
	if (i >= 3) {
		printf("������������˳�����");
	}

	return 0;
}