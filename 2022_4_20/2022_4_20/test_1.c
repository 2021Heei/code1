#define _CRT_SECURE_NO_WARNINGS 1
/*今天浙大研究生复试的上机考试跟传统笔试的打分规则相似，总共有n道题，每道题有对应分值，最后计算总成绩。现给定录取分数线，请你写程序找出最后通过分数线的考生，并将他们的成绩按降序打印。

输入
第1行给出考生人数N ( 1<= N<=100 )、考题数M (1<=M<=10 )、分数线（正整数）G；
第2行排序给出第1题至第M题的正整数分值；
以下N行，每行给出一名考生的准考证号（长度不超过20的字符串）、该生解决的题目总数m、以及这m道题的题号
（题目号由1到M）。

输出
首先在第1行输出不低于分数线的考生人数n，随后n行按分数从高到低输出上线考生的考号与分数，其间用1空格分隔。若有多名考生分数相同，则按他们考号的升序输出。

样例输入 Copy
4 5 25
10 10 12 13 15
CS004 3 5 1 3
CS003 5 2 4 1 3 5
CS002 2 1 2
CS001 3 2 3 5
样例输出 Copy
3
CS003 60
CS001 37
CS004 37
*/
/*
思路：
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义结构体 
typedef struct student {
	char num[20];
	int m;//考生解决的题目数 
	int test[10];//每个题目对应的的题号 
	int sco_sum;//总成绩 
}STU;

int main() {
	//生人数N ( 1<= N<=100 )、考题数M (1<=M<=10 )、分数线（正整数）G； 
	int N = 0;
	int M = 0;
	int G = 0;
	scanf("%d%d%d", &N, &M, &G);
	//用指针p动态内存分配空间，代表每一个考题的分数 
	int* p = (int*)malloc(sizeof(int) * M);
	int i = 0;
	int j = 0;
	for (i = 0; i < M; i++) {
		scanf("%d", &p[i]);
	}
	//读取换行符 
	getchar();
	//动态内存分配结构体数组 ，个数为学生数N 
	STU* stu = (STU*)malloc(sizeof(STU) * N);
	for (i = 0; i < N; i++) {
		scanf("%s%d", stu[i].num, &stu[i].m);
		//每个学生总成绩初始化为0 
		stu[i].sco_sum = 0;
		for (j = 0; j < stu[i].m; j++) {
			scanf("%d", &stu[i].test[j]);
			//内循环得到每道题对应的题号，减去1即为考生该题的成绩的下标 
			stu[i].sco_sum += p[stu[i].test[j] - 1];
		}
		//	printf("%d\n",stu[i].sco_sum);
	}
	//在定义一个长度不小于学生人数N的结构体数组储存过分数线G的考生 
	STU* q = (STU*)malloc(sizeof(STU) * N);
	int cnt = 0;
	for (i = 0, j = 0; i < N; i++) {
		//用两个变量分别表示原来结构体数组p[]和新结构体数组q[]的下标 
		if (stu[i].sco_sum >= G) {
			q[j] = stu[i];
			j++;
			cnt++;
		}
	}
	//选择排序对结构体数组q[]排序 
	for (i = 0; i < cnt - 1; i++) {
		for (j = i + 1; j < cnt; j++) {
			//printf("%d\n%d\n",q[i].sco_sum,q[j].sco_sum);
			if (q[i].sco_sum < q[j].sco_sum) {
				STU t = q[i];
				q[i] = q[j];
				q[j] = t;
			}
			else if (q[i].sco_sum == q[j].sco_sum && strcmp(q[i].num, q[j].num) > 0) {
				STU t = q[i];
				q[i] = q[j];
				q[j] = t;
			}
		}
	}
	printf("%d\n", cnt);
	for (i = 0; i < cnt; i++) {
		printf("%s %d\n", q[i].num, q[i].sco_sum);
	}

	return 0;
}