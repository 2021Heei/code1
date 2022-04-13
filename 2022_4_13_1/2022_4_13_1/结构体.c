#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef struct student {
	char name[20];
	int perscore;//平均成绩
	int score1;//评议成绩
	char isganbu;//学生干部
	char iswest;//西部
	int paper;//论文数
	int money;
}stu;
int main() {
	int n, i, j;
	scanf("%d", &n);
	getchar();
	stu pepo[10];
	int sum = 0;//总的奖学金
	for (i = 0; i < n; i++) {
		scanf("%s %d %d %c %c %d", pepo[i].name, &pepo[i].perscore, &pepo[i].score1, &pepo[i].isganbu,
			&pepo[i].iswest, &pepo[i].paper);
		pepo[i].money = 0;
		if (pepo[i].perscore > 80 && pepo[i].paper >= 1)
			pepo[i].money += 8000;
		if (pepo[i].perscore > 85 && pepo[i].score1 > 80)
			pepo[i].money += 4000;
		if (pepo[i].perscore > 90)
			pepo[i].money += 2000;
		if (pepo[i].perscore > 85 && pepo[i].iswest == 'Y')
			pepo[i].money += 1000;
		if (pepo[i].score1 > 80 && pepo[i].isganbu == 'Y')
			pepo[i].money += 850;
		sum += pepo[i].money;
	}
	stu max = pepo[0];//
	for (i = 1; i < n; i++) {
		if (pepo[i].money > max.money)
			max = pepo[i];
	}

	printf("%s\n%d\n%d\n", max.name, max.money, sum);

	return 0;
}