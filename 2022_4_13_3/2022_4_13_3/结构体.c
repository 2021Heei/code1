
//某单位进行选举，有5位候选人：zhang、wang、zhao、liu、miao。编写程序，统计每人所得的票数。要求每人的信息里包括两部分：name和votes，分别描述姓名和所得票数。每个人的信息用一个结构体来表示，5个人的信息使用结构体数组。
//
//
//
//输入
//
//
//首先输入一个整数n，表示一张选票，接下来n行，每行是一个由小写英文字母组成的字符串，表示以上5个候选人之一。
//
//
//
//输出
//
//
//输出5行，按zhang、wang、zhao、liu、miao的顺序输出5个候选人的姓名和所得票数，用空格隔开。
//
//
//
//样例输入 Copy
//
//8
//zhang
//wang
//zhang
//zhao
//wang
//liu
//wang
//wang
//
//
//
//
//样例输出 Copy
//
//zhang 2
//wang 4
//zhao 1
//liu 1
//miao 0


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef struct people {
	char name[20];
	int votes;
}PEO;

int main() {
	int n, i;
	char s[10];
	scanf("%d", &n);
	getchar();//吸收换行符
	PEO person[5] = { {"zhang",0 },{"wang",0},{"zhao",0},{"liu",0},{"miao",0} };

	for (i = 0; i < n; i++) {
		gets(s);
		for (int j = 0; j < 5; j++) {
			if (strcmp(s, person[j].name) == 0) {
				person[j].votes++;
				break;
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%s %d\n", person[i].name, person[i].votes);

	return 0;
}