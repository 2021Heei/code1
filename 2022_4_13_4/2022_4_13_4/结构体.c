//计算机与通信工程学院2012届学生会主席投票选举工作定于1月6日在电教楼前隆重举行。本次投票将采用电脑统计选票的方式，当投票选举正式开始后，同学们将排队一一走到电脑前，投上自己神圣的一票：在电脑前输入一个姓名，然后输入回车表示确认。
//当所同学投票结束，工作人员只需要输入一个”#”并回车确认，表示投票结束，电脑立即显示出得票最高的同学姓名，该同学将当选为新一届计算机与通信工程学院学生会主席。
//选举大会的准备工作正在紧张进行，编程统计投票的工作就交给你了。
//
//
//
//输入
//
//
//本题为单实例测试。输入包含多行，每行是一个由小写英文字母组成的字符串，表示一个姓名，遇到#时表示输入结束。 你可以假定，参加投票学生的人数不超过500人，每个学生姓名字符串的长度小于20。
//
//
//
//输出
//
//
//输出为一个字符串——当选为学生会主席的学生姓名
//
//
//
//
//样例输入 Copy
//
//wanglin
//liming
//wanglin
//wanglin
//fangfang
//liming
//#
//
//
//
//
//
//
//样例输出 Copy
//
//wanglin

/*思路:初始化结构数组成员，名字字符串每次先输入到缓存数组中，
在用一个循环寻找结构数组中是否已经存在，若存在则票数votes+1，退出循环，
若不存在则把缓存数组中的字符串复制到结构数组第一个没有被名字字符串赋值的
结构中，并使票数置为1；*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

typedef struct person {
	char name[20];
	int votes;
}PER;

int main() {
	PER s[500];//定义结构数组
	PER t;//缓存数组
	int i;

	for (i = 0; i < 500; i++) {
		strcpy(s[i].name, "0000");
		s[i].votes = 0;
	}
	for (i = 0; scanf("%s", t.name),strcmp(t.name,"#")!=0; i++) {
		getchar();

		for (int j = 0; j <= i; j++) {
			if (strcmp(t.name, s[j].name) == 0) {
				s[j].votes++;
				break;
			}
			else if(strcmp("0000",s[j].name) == 0) {
				strcpy(s[j].name, t.name);
				s[j].votes++;
				break;
			}
		}
	}

	PER max = s[0];
	for (int k = 1; k < i; k++) {
		if (s[k].votes > max.votes)
			max = s[k];
	}
	printf("%s\n", max.name);

	return 0;
}