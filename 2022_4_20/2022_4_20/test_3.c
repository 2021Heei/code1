#define _CRT_SECURE_NO_WARNINGS 1
/*ZZF最近迷上了一款萝莉养成游戏，游戏里通过各种渠道增加主人公的属性值，最后根据主人公不同的属性值决定游戏的大结局。

 但是对于ZZF来说，她只关心人物智力、武力、法力、魅力的大小，ZZF评定人物得分的方法是这四个属性中第二小的属性值加上最大的属性值的和。但是ZZF现在很迷，不会计算了，聪明的你能帮帮她么？
输入
输入一行包含四个整数a、b、c、d以空格隔开，分别代表智力、武力、法力、魅力的属性值。（0 <= a, b, c, d <= 999），数据保证a, b, c, d互不相同。
输出
输出一个整数代表ZZF对于人物的评分。
样例输入 Copy
181 5 0 204
样例输出 Copy
209*/
#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	int max1 = a;
	int max3 = b;
	int t = 0;
	//a、c、d中的最大值 
	if (max1 < c) {
		t = max1;
		max1 = c;
		c = t;
	}
	if (max1 < d) {
		t = max1;
		max1 = d;
		d = t;
	}
	//b、c、d中的最大值 
	if (max3 < c) {
		t = max3;
		max3 = c;
		c = t;
	}
	if (max3 < d) {
		t = max3;
		max3 = d;
		d = t;
	}

	if (max1 < max3) {
		t = max1;
		max1 = max3;
		max3 = t;
	}
	//找第二小的值存入max3 
	if (c > d) {
		max3 = c;
	}
	else {
		max3 = d;
	}
	printf("%d\n", max1 + max3);

	return 0;
}