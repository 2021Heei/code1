#define _CRT_SECURE_NO_WARNINGS 1
/*
有一学生成绩表，包括学号、姓名、3门课程成绩。请按如下规则排序：按总成绩降序排序，若总成绩相同，则按姓名升序排序，若姓名也相同，则按照学号升序排列。 




输入 

首先输入一个整数n(1<=n<=100)，表示学生人数； 
 然后输入n行，每行包含一个学生的信息：学号（12位）、姓名（不含空格且不超过20位），以及3个整数，表示3门课成绩，数据之间用空格隔开。 




输出 

输出排序后的成绩单，格式见输出样例。 




样例输入 Copy 

3
541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010190 Fangfang 89 88 85



样例输出 Copy 

541207010189 Wangli 85 87 99 271
541207010190 Fangfang 89 88 85 262
541207010188 Zhangling 89 78 95 262

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//定义结构体
typedef struct student {
	char num[20];
	char name[20];
	int sco1;
	int sco2;
	int sco3;
	int sum;//总成绩
}STU;

//输出结构数组的n个元素
void print(STU* stu, int n);
//总成绩排序并判断总成绩是否相同
int issum(STU* stu, int n);
//使用名字对数组n个元素升序排列并判断名字是否相同
int isname(STU* stu, int n);
//按学号升序排列
void num_up_sort(STU* stu, int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	getchar();//读取字符
	//动态内存分配
	STU* stu = (STU*)malloc(sizeof(STU) * n);
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d",
			stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
		//计算每个学生总成绩
		stu[i].sum = stu[i].sco1 + stu[i].sco2 + stu[i].sco3;
	}
	if (issum(stu,n)) {
		printf("sum\n");
		print(stu, n);
	}
	else if (isname(stu,n)) {
		printf("name\n");
		print(stu, n);
	}
	else {
		printf("num\n");
		num_up_sort(stu, n);
		print(stu, n);
	}
	return 0;
}
//总成绩排序并判断总成绩是否相同
int issum(STU* stu, int n){
	int i = 0;
	int flag = 0;//初始为0，认为总成绩相同
	//冒泡排序 - 降序
	for (i = 0; i < n - 1; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (stu[j].sum != stu[j + 1].sum)
				flag = 1;
			if (stu[j].sum < stu[j + 1].sum) {
				STU t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
	return flag;
}
//使用名字对数组n个元素升序排列并判断名字是否相同
int isname(STU* stu, int n) {
	int i = 0;
	int flag = 0;//初始为0，认为总成绩相同
	//冒牌排序 - 升序
	for (i = 0; i < n - 1; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			//如果存在两个名字不相等
			if (strcmp(stu[j].name, stu[j + 1].name))
				flag = 1;
			if (strcmp(stu[j].name, stu[j+1].name) > 0) {
				STU t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
	return flag;
}
//按学号升序排列
void num_up_sort(STU* stu, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (strcmp(stu[j].num, stu[j + 1].num) > 0) {
				STU t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
}
//输出结构数组的n个元素
void print(STU* stu, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%s %s %d %d %d %d\n",
			stu[i].num, stu[i].name, stu[i].sco1, stu[i].sco2, stu[i].sco3,
			stu[i].sum);
	}
}
