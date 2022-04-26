#define _CRT_SECURE_NO_WARNINGS 1
/*随机生成一个1~100的整数，用户猜数字游戏，每次猜后都给出反馈*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int guess = rand() % 99 +1;
	int input = 0;
	
	do {
		scanf("%d", &input);
		if (input > guess) {
			printf("猜大了\n");
		}
		else if (input < guess) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	} while (1);

	return 0;
}