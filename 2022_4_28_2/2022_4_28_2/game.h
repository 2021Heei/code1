#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
//��������
//��Ϸ�߼�
/*
1. ���ѡ��
2. �������飬��ӡ����
3. �û�����,��������
4. �ж���Ӯ��������
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3		//����(�ַ�����)����
#define COLUMN 3	//����(�ַ�����)����

//��ʼ������
void initboard(char board[ROW][COLUMN], int row, int column);

//�˵�
void menu();

//��ӡ����
void Print_board(char board[ROW][COLUMN], int row, int column);

//�������
void keyboard_player(char board[ROW][COLUMN],int row, int column);

//��������
void keyboard_pc(char board[ROW][COLUMN],int row, int column);

////�жϸ��������Ƿ��ǿո����Ե���
//int iswhat(char board[ROW][COLUMN], int x, int y);

//�ж�״̬
/*
���Ӯ	*
����Ӯ	#
ƽ��	Draw
����	Continue

*/
char ISWIN(char board[ROW][COLUMN], int row, int column);

//�ж������Ƿ��пո�
int isfull(char board[ROW][COLUMN], int row, int column);