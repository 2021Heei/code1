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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {//定义结构体
	char num[20];
	char name[20];
	int sco1;
	int sco2;
	int sco3;
}STU;
int main() {
	int n,i;
	scanf("%d", &n);
	getchar();

	STU* stu;
	//动态内存分配
	stu = (STU*)malloc(sizeof(STU) * n);
	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d", 
			stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
	}
	STU t;
	scanf("%s", t.num);
	//用k记录要删除的下标，输出是判断k的值
	int k = -1;
		for (i = 0; i < n; i++) {
			if (strcmp(t.num, stu[i].num) == 0) {
				k = i;
				break;
			}
	}
		if (k == -1) {
			printf("error!\n");
		}
		else {
			for (i = k; i < n - 1; i++) {
				stu[i] = stu[i + 1];
			}
			for (i = 0; i < n - 1; i++)
				printf("%s %s %d %d %d\n",
					stu[i].num, stu[i].name, stu[i].sco1, stu[i].sco2, stu[i].sco3);
		}

	return 0;
}