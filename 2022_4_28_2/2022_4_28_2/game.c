#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game() {
	//�������̣���С�����Լ�����
	char board[ROW][COLUMN] = { 0 };

	//��ʼ������
	initboard(board, ROW, COLUMN);

	//�������ȷ��˭��ŷ�ʣ�1����ң�0�ǵ���
	unsigned int ret = rand() % 2;
	if (ret == 1) {
		printf("�������!\n");
		//��Ϸ����Һ͵��Խ������壬��һ��ѭ��
		do {
			//�������
			keyboard_player(board, ROW, COLUMN);
			//ʵʱ��ӡ���̺�����
			Print_board(board, ROW, COLUMN);
			//�ж���ֵ�״̬
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
			//��������
			keyboard_pc(board, ROW, COLUMN);
			//ʵʱ��ӡ���̺�����
			Print_board(board, ROW, COLUMN);
			//�ж���ֵ�״̬
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
		} while (1);
	}
	else {
		printf("��������!\n");
		//��Ϸ����Һ͵��Խ������壬��һ��ѭ��
		do {
			//��������
			keyboard_pc(board, ROW, COLUMN);
			//ʵʱ��ӡ���̺�����
			Print_board(board, ROW, COLUMN);
			//�ж���ֵ�״̬
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
			//�������
			keyboard_player(board, ROW, COLUMN);
			//ʵʱ��ӡ���̺�����
			Print_board(board, ROW, COLUMN);
			//�ж���ֵ�״̬
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
		} while (1);
	}
	//����ѭ��ʱ�����һ�����н���ˣ�����Ҫ����ISWIN�����ķ���ֵȷ�����
	if (ISWIN(board, ROW, COLUMN) == '*') {
		printf("��Զ����!\n");
	}
	else if (ISWIN(board, ROW, COLUMN) == '#') {
		printf("ĩ���˻���!\n");
	}
	else {
		printf("����൱�Ķ���!\n");
	}
	
}
int main() {
	//�����������ı���
	int input = -1;
	//��������ӣ����ڵ��Ե����������������
	srand((unsigned)time(NULL));
	char ch;
	//һ��ѭ���������չʾ�˵����������ѡ�����ѭ���Ľ���
	do {
		//�˵�
		menu();
		printf("������ѡ��>");
		scanf("%d", &input);
		//���ѭ�������ֲ�scanf�����ַ�����ʱ����ѭ��������
		while ((ch = getchar()) != '\n') {
			//����һ�������
			;
		}
		switch (input) {
		case 1:
			//��ʼ��Ϸ
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("ѡ�����,����������\n");
			break;
		}
		//ֻ�е�input��0ʱѭ���Ž���
	} while (input);

	return 0;
}