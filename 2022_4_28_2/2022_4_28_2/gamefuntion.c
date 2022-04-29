#define _CRT_SECURE_NO_WARNINGS 1
//函数定义
#include "game.h"

//初始化棋盘
void initboard(char board[ROW][COLUMN], int row, int column) {
	int i = 0;
	for (i = 0; i < ROW; i++) {
		int j = 0;
		for (j = 0; j < COLUMN; j++) {
			board[i][j] = ' ';
		}
	}
}

//菜单
void menu() {
	printf("***************************\n");
	printf("******    1.三子棋   ******\n");
	printf("******    0.退出     ******\n");
	printf("***************************\n");
}


//打印棋盘
void Print_board(char board[ROW][COLUMN], int row, int column) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		//棋盘列标
		if (i == 0) {
			//棋盘左上角用四个空格填充
			printf("    ");
			//列标与棋盘的棋子对齐，考虑到棋盘可能增大到两位数，加一点格式输出
			for (j = 0; j < column; j++) {
				printf(" %-2d ", j + 1);
			}
			printf("\n");
		}
		//棋盘行标与棋子对齐，与列标相似。在每一行只打印一次
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
			//棋盘行标相关的四个空格，只在每行的开始打印
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

//玩家输入
void keyboard_player(char board[ROW][COLUMN],int row, int column) {
	printf("请输入三子棋的坐标>");
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
				printf("转牛角尖是吧!\n请重新输入>");
			}
			
		}
		else {
			printf("输入无效!\n请重新输入>");
		}
		
	}
	printf("玩家下棋'*':\n");
}

//电脑输入
void keyboard_pc(char board[ROW][COLUMN], int row, int column) {
	printf("电脑下棋'#':\n");
	int x, y;
	while (1) {
		x = rand() % row;
		y = rand() % column;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
			////判断周围平行的四个
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
			////判断周围对角的四个
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
////判断给定坐标是否是空格或电脑的棋，是返回1，否则返回0
//int iswhat(char board[ROW][COLUMN], int x, int y) {
//	if (board[x][y] == ' ' || board[x][y] == '#') {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}

//判断状态
/*
玩家赢	*
电脑赢	#
平局	Draw
继续	Continue

*/
//只判断三子棋下的输赢情况，棋盘增大时、五子棋时此判断方法无效
char ISWIN(char board[ROW][COLUMN], int row, int column) {
	int i = 0;
	//玩家赢	*	电脑赢	#
	//每行和每列
	for (i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	//主对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	//副对角线
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ') {
		return board[2][0];
	}
	//平局
	if (isfull(board, row, column)) {
		return 'D';
	}
	//继续
	return 'C';
}

//返回1是满了
//返回0是未满
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
