#define _CRT_SECURE_NO_WARNINGS 1
//��������
#include "game.h"

//��ʼ������
void initboard(char board[ROW][COLUMN], int row, int column) {
	int i = 0;
	for (i = 0; i < ROW; i++) {
		int j = 0;
		for (j = 0; j < COLUMN; j++) {
			board[i][j] = ' ';
		}
	}
}

//�˵�
void menu() {
	printf("***************************\n");
	printf("******    1.������   ******\n");
	printf("******    0.�˳�     ******\n");
	printf("***************************\n");
}


//��ӡ����
void Print_board(char board[ROW][COLUMN], int row, int column) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		//�����б�
		if (i == 0) {
			//�������Ͻ����ĸ��ո����
			printf("    ");
			//�б������̵����Ӷ��룬���ǵ����̿���������λ������һ���ʽ���
			for (j = 0; j < column; j++) {
				printf(" %-2d ", j + 1);
			}
			printf("\n");
		}
		//�����б������Ӷ��룬���б����ơ���ÿһ��ֻ��ӡһ��
		for (j = 0; j < column; j++) {
			if (j == 0) {
				printf(" %-2d ", i + 1);
			}
			
			printf(" %c ", board[i][j]);
			if (j < column - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			//�����б���ص��ĸ��ո�ֻ��ÿ�еĿ�ʼ��ӡ
			for (j = 0; j < column; j++) {
				if (j == 0) {
					printf("    ");
				}
				printf("---");
				if (j < column - 1)
					printf("|");
			}
		}
		
		printf("\n");
	}
}

//�������
void keyboard_player(char board[ROW][COLUMN],int row, int column) {
	printf("�����������������>");
	int x, y;
	char ch;
	while (1) {
		scanf("%d%d", &x, &y);
		while ((ch = getchar()) != '\n') {
			;
		}
		if (x >= 1 && x <= row && y >=1 && y <=	column) {
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("תţ�Ǽ��ǰ�!\n����������>");
			}
			
		}
		else {
			printf("������Ч!\n����������>");
		}
		
	}
	printf("�������'*':\n");
}

//��������
void keyboard_pc(char board[ROW][COLUMN], int row, int column) {
	printf("��������'#':\n");
	int x, y;
	while (1) {
		x = rand() % row;
		y = rand() % column;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
			////�ж���Χƽ�е��ĸ�
			//if (x + 1 < ROW && y < COLUMN && iswhat(board, x + 1, y)) {
			//	board[x][y] = '#';
			//	break;
			//}
			//if (x - 1 < ROW && y < COLUMN && iswhat(board, x - 1, y)) {
			//	board[x][y] = '#';
			//	break;
			//}
			//if (x < ROW && y + 1 < COLUMN && iswhat(board, x, y + 1)) {
			//	board[x][y] = '#';
			//	break;
			//}
			//if (x < ROW && y - 1 < COLUMN && iswhat(board, x, y - 1)) {
			//	board[x][y] = '#';
			//	break;
			//}
			////�ж���Χ�Խǵ��ĸ�
			//if (x + 1 < ROW && y + 1< COLUMN && iswhat(board, x + 1, y + 1)) {
			//	board[x][y] = '#';
			//	break;
			//}
			//if (x - 1 < ROW && y - 1 < COLUMN && iswhat(board, x - 1, y - 1)) {
			//	board[x][y] = '#';
			//	break;
			//}
			//if (x + 1 < ROW && y - 1 < COLUMN && iswhat(board, x + 1, y - 1)) {
			//	board[x][y] = '#';
			//	break;
			//}
			//if (x - 1 < ROW && y + 1 < COLUMN && iswhat(board, x - 1, y + 1)) {
			//	board[x][y] = '#';
			//	break;
			//}
				
		}
	}
}
////�жϸ��������Ƿ��ǿո����Ե��壬�Ƿ���1�����򷵻�0
//int iswhat(char board[ROW][COLUMN], int x, int y) {
//	if (board[x][y] == ' ' || board[x][y] == '#') {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}

//�ж�״̬
/*
���Ӯ	*
����Ӯ	#
ƽ��	Draw
����	Continue

*/
//ֻ�ж��������µ���Ӯ�������������ʱ��������ʱ���жϷ�����Ч
char ISWIN(char board[ROW][COLUMN], int row, int column) {
	int i = 0;
	//���Ӯ	*	����Ӯ	#
	//ÿ�к�ÿ��
	for (i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	//���Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	//���Խ���
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ') {
		return board[2][0];
	}
	//ƽ��
	if (isfull(board, row, column)) {
		return 'D';
	}
	//����
	return 'C';
}

//����1������
//����0��δ��
int isfull(char board[ROW][COLUMN], int row, int column) {
	int flag = 1;
	int i = 0;
	for (i = 0; i < ROW; i++) {
		int j = 0;
		for (j = 0; j < COLUMN; j++) {
			if (board[i][j] == ' ') {
				flag = 0;
				break;
			}
		}
	}

	return flag;
}
