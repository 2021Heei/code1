#define _CRT_SECURE_NO_WARNINGS 1
/*�������һ��1~100���������û���������Ϸ��ÿ�βº󶼸�������*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int guess = rand() % 99 +1;
	int input = 0;
	
	do {
		scanf("%d", &input);
		if (input > guess) {
			printf("�´���\n");
		}
		else if (input < guess) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	} while (1);

	return 0;
}