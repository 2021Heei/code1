#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game() {
	//创建棋盘，大小可以自己定义
	char board[ROW][COLUMN] = { 0 };

	//初始化棋盘
	initboard(board, ROW, COLUMN);

	//简单随机，确定谁是欧皇，1是玩家，0是电脑
	unsigned int ret = rand() % 2;
	if (ret == 1) {
		printf("玩家先手!\n");
		//游戏中玩家和电脑交替下棋，是一个循环
		do {
			//玩家输入
			keyboard_player(board, ROW, COLUMN);
			//实时打印棋盘和棋子
			Print_board(board, ROW, COLUMN);
			//判断棋局的状态
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
			//电脑输入
			keyboard_pc(board, ROW, COLUMN);
			//实时打印棋盘和棋子
			Print_board(board, ROW, COLUMN);
			//判断棋局的状态
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
		} while (1);
	}
	else {
		printf("电脑先手!\n");
		//游戏中玩家和电脑交替下棋，是一个循环
		do {
			//电脑输入
			keyboard_pc(board, ROW, COLUMN);
			//实时打印棋盘和棋子
			Print_board(board, ROW, COLUMN);
			//判断棋局的状态
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
			//玩家输入
			keyboard_player(board, ROW, COLUMN);
			//实时打印棋盘和棋子
			Print_board(board, ROW, COLUMN);
			//判断棋局的状态
			if (ISWIN(board, ROW, COLUMN) != 'C') {
				break;
			}
		} while (1);
	}
	//跳出循环时，棋局一定是有结果了，所以要检索ISWIN函数的返回值确定结果
	if (ISWIN(board, ROW, COLUMN) == '*') {
		printf("永远滴神!\n");
	}
	else if (ISWIN(board, ROW, COLUMN) == '#') {
		printf("末日人机了!\n");
	}
	else {
		printf("旗鼓相当的对手!\n");
	}
	
}
int main() {
	//用于玩家输入的变量
	int input = -1;
	//随机数种子，用于电脑的随机下棋坐标生成
	srand((unsigned)time(NULL));
	char ch;
	//一个循环，向玩家展示菜单，玩家输入选择决定循环的进行
	do {
		//菜单
		menu();
		printf("请输入选择>");
		scanf("%d", &input);
		//这个循环用来弥补scanf接受字符数据时会死循环的问题
		while ((ch = getchar()) != '\n') {
			//这是一条空语句
			;
		}
		switch (input) {
		case 1:
			//开始游戏
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("选择错误,请重新输入\n");
			break;
		}
		//只有当input是0时循环才结束
	} while (input);

	return 0;
}