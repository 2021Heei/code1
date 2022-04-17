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
/*
思路：存在多重判断，按总成绩降序->名字升序->学号升序的优先级排序，
要使用多个ifelse语句
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
	int j = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			//如果总成绩小就交换
			if (stu[i].sum < stu[j].sum) {
				STU t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
			//如果总成绩相同，名字大就交换
			else if (stu[i].sum == stu[j].sum && strcmp(stu[i].name, stu[j].name) > 0) {
				STU t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
			//如果总成绩相同，名字相同，学号大就交换
			else if (stu[i].sum == stu[j].sum && strcmp(stu[i].name, stu[j].name) == 0 &&
				strcmp(stu[i].num, stu[j].num) > 0) {
				STU t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
		}
	}
	//输出结构数组
	print(stu, n);

	return 0;
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