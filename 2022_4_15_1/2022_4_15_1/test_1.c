#define _CRT_SECURE_NO_WARNINGS 1
/*

一学生成绩表，包括学号、姓名、3门课程成绩。请实现如下查找功能：输入一个学生的学号，输出该学生学号、姓名、4门课程成绩





输入


首先输入一个整数n(1<=n<=100)，表示学生人数；
 然后输入n行，每行包含一个学生的信息：学号（12位）、姓名（不含空格且不超过20位），以及3个整数，表示3门课成绩，数据之间用空格隔开。
 最后一行输入一个学号num



输出


若学号num存在，输出该学生的学号、姓名、3门课程成绩；若该学号不存在，则输出“Not Found”。



样例输入 Copy

3
541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010189 Fangfang 85 68 76
541207010188




样例输出 Copy

541207010188 Zhangling 89 78 95

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//定义结构体 
struct student {
	char num[20];
	char name[20];
	int sco1;
	int sco2;
	int sco3;
};

int main() {
	int n, i;
	scanf("%d", &n);
	getchar();//读取换行符 

	//定义结构体指针，动态内存分配 
	struct student* stu;
	stu = (struct student*)malloc(sizeof(struct student) * n);

	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
	}
	struct student t;
	//	getchar();
	scanf("%s", t.num);

	int flag = 0;
	for (i = 0; i < n; i++) {
		if (strcmp(t.num, stu[i].num) == 0) {
			t = stu[i];
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%s %s %d %d %d\n", t.num, t.name, t.sco1, t.sco2, t.sco3);
	else
		printf("Not Found\n");

	return 0;
}