#define _CRT_SECURE_NO_WARNINGS 1
/*

有一学生成绩表，包括学号、姓名、3门课程成绩。请按要求排序输出：若输入1，则按第1门课成绩降序输出成绩表，若输入为i（1<=i<=3)，则按第i门课成绩降序输出成绩表。



输入 


首先输入一个整数n(1<=n<=100)，表示学生人数； 
 然后输入n行，每行包含一个学生的信息：学号（12位）、姓名（不含空格且不超过20位），以及3个整数，表示3门课成绩，数据之间用空格隔开。 
 最后一行输入一个整数i，表示要求按第i门课成绩降序排序输出，若该门课成绩相同，则按学号升序。



输出 


输出按第i门课降序排序的结果，格式见样例。



样例输入 Copy 

3
541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010190 Fangfang 85 68 76
1




样例输出 Copy 

541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010190 Fangfang 85 68 76

*/
/*
思路：定义学生的结构体变量，
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	char num[20];
	char name[20];
	int sco1;
	int sco2;
	int sco3;
}STU;
//输出n个元素的结构体数组
void print1(STU* stu, int n);
//按学号升序排列并输出结构体数组
void print2(STU* stu, int n);
//对相应成绩排序并返回一个整数代表相应成绩是否相同
int mysort1(STU* stu, int n);
int mysort2(STU* stu, int n);
int mysort3(STU* stu, int n);

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	STU* stu = (STU*)malloc(sizeof(STU) * n);
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d",
			stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
	}
	//输入选择
	int select = 0;
	scanf("%d", &select);
	switch (select) {
	case 1:
		if (mysort1(stu, n)) {
			print1(stu, n);
		}
		else
			print2(stu, n);
		break;
	case 2:
		if (mysort2(stu, n)) {
			print1(stu, n);
		}
		else
			print2(stu, n);
		break;
	case 3:
		if (mysort3(stu, n)) {
			print1(stu, n);
		}
		else
			print2(stu, n);
		break;
	}

	return 0;
}

//排序函数并返回一个整数
int mysort1(STU* stu, int n) {
	int i = 0;
	int flag = 0;//标志变量判断元素是否相等
	for (i = 0; i < n - 1; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			//不相同时，记录
			if (stu[j].sco1 != stu[j+1].sco1)
				flag = 1;
			if (stu[j].sco1 < stu[j + 1].sco1) {
				STU t = stu[j];
					stu[j] = stu[j+1];
					stu[j+1] = t;
			}
		}
	}
	return flag;
}

int mysort2(STU* stu, int n) {
	int i = 0;
	int flag = 0;//标志变量判断元素是否相等,默认为0相等
	for (i = 0; i < n - 1; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			//不相同时，记录
			if (stu[j].sco1 != stu[j+1].sco1)
				flag = 1;
			if (stu[j].sco2 < stu[j + 1].sco2) {
				STU t = stu[j];
					stu[j] = stu[j + 1];
					stu[j + 1] = t;
			}
		}
	}
	return flag;
}
int mysort3(STU* stu, int n) {
	int i = 0;
	int flag = 0;//标志变量判断元素是否相等
	for (i = 0; i < n - 1; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			//不相同时，记录
			if (stu[j].sco1 != stu[j+1].sco1)
				flag = 1;
			if (stu[j].sco3 < stu[j + 1].sco3) {
				STU t = stu[j];
					stu[j] = stu[j + 1];
					stu[j + 1] = t;
			}
		}
	}
	return flag;
}
void print1(STU* stu, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%s %s %d %d %d\n",
			stu[i].num, stu[i].name, stu[i].sco1, stu[i].sco2, stu[i].sco3);
	}
}
//按学号升序排列并输出结构体数组
void print2(STU* stu, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (strcmp(stu[j].num, stu[j+1].num) > 0) {
				STU t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
	print1(stu, n);
}