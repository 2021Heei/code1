#define _CRT_SECURE_NO_WARNINGS 1
/*编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
提示登录成，如果三次均输入错误，则退出程序*/

#include <stdio.h>
#include <string.h>

#define N 20
int main() {
	char key[] = "hello123456";
	char input[N] = { 0 };
	int i = 0;
	for(i = 0; i < 3; i++){
		gets(input);
		if (strcmp(input, key) == 0) {
			printf("登录成功!\n");
		}
		else if(i != 2){
			printf("输入错误，请重新输入!\n");
		}
	}
	if (i >= 3) {
		printf("密码输入错误，退出程序");
	}

	return 0;
}