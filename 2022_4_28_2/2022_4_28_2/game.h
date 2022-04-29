#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
//函数声明
//游戏逻辑
/*
1. 玩家选择
2. 创建数组，打印棋盘
3. 用户下棋,电脑下棋
4. 判断输赢，输出结果
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3		//棋盘(字符数组)的行
#define COLUMN 3	//棋盘(字符数组)的列

//初始化棋盘
void initboard(char board[ROW][COLUMN], int row, int column);

//菜单
void menu();

//打印棋盘
void Print_board(char board[ROW][COLUMN], int row, int column);

//玩家输入
void keyboard_player(char board[ROW][COLUMN],int row, int column);

//电脑输入
void keyboard_pc(char board[ROW][COLUMN],int row, int column);

////判断给定坐标是否是空格或电脑的棋
//int iswhat(char board[ROW][COLUMN], int x, int y);

//判断状态
/*
玩家赢	*
电脑赢	#
平局	Draw
继续	Continue

*/
char ISWIN(char board[ROW][COLUMN], int row, int column);

//判断棋盘是否有空格
int isfull(char board[ROW][COLUMN], int row, int column);