#define _CRT_SECURE_NO_WARNINGS 1

/*


有一学生成绩表，包括学号、姓名、3门课程成绩。已知该成绩表按学号升序排序。请编程实现，添加一个新的学生信息，且使成绩表仍按学号有序；若待添加的学号与已有学号重复，则输出错误信息，拒绝添加。



输入


首先输入一个整数n(1<=n<=100)，表示学生人数；
 然后输入n行，每行包含一个学生的信息：学号（12位）、姓名（不含空格且不超过20位），以及3个整数，表示3门课成绩，数据之间用空格隔开。
 最后一行输入一个待添加的学生信息，包括学号、姓名和3门课成绩



输出


若待添加的学号与已有学号重复，则输出只有一行“error!”；否则，输出n+1行，即添加后的成绩单信息。



样例输入 Copy

3
541207010188 Zhangling 78 95 55
541207010189 Wangli 87 99 88
541207010191 Fangfang 68 76 75
541207010190 Lilei 68 79 82



样例输出 Copy

541207010188 Zhangling 78 95 55
541207010189 Wangli 87 99 88
541207010190 Lilei 68 79 82
541207010191 Fangfang 68 76 75



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
	getchar();//读取换行符
	STU* stu = (STU*)malloc(sizeof(STU) * (n+1));//动态内存分配
	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d", 
			stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
	}
	STU t;
	scanf("%s %s %d %d %d", t.num, t.name, &t.sco1, &t.sco2, &t.sco3);

	/*插入排序结构数组最后一个元素开始依次与输入的值比较，输入的值大时，相应数组元素
	向后移动一位*/
	//标志变量记录输出方式
	int flag = 1;
	for (i = n-1; i >= 0; i--) {
		if (strcmp(t.num, stu[i].num) < 0) {
			stu[i + 1] = stu[i];
		}
		else if (strcmp(t.num, stu[i].num) > 0) {
			stu[i + 1] = t;	
			break;
		}
		else {
			flag = 0;
		}
	}
	//但输入的学号在整个数组最小时，需要再判断
	if (i < 0)
		stu[0] = t;

	if (flag) {
		for (i = 0; i < n + 1; i++) {
			printf("%s %s %d %d %d\n", 
				stu[i].num, stu[i].name, stu[i].sco1, stu[i].sco2, stu[i].sco3);
		}
	}
	else {
		printf("error!\n");
	}

	return 0;
}