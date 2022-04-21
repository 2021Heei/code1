#define _CRT_SECURE_NO_WARNINGS 1
/*众所周知，对于每次提交OJ都会有如下的几种返回结果：
Accepted：您的程序是正确的，恭喜！
Presentation Error：虽然您的程序貌似输出了正确的结果，但是这个结果的格式有点问题。请检查程序的输出是否多了或者少了空格（' '）、制表符（'\t'）或者换行符（'\n'）。
Wrong Answer：输出结果错，这个一般认为是算法有问题。点击链接可以查看具体的错误信息，可以得到相关提示。
Runtime Error：运行时错误，这个一般是程序在运行期间执行了非法的操作造成的。一般例如scanf函数的地址列表中缺少符号&、指针、数组下标越界、除数为0、堆栈溢出等。
Time Limit Exceeded：您的程序运行的时间已经超出了这个题目的时间限制。
Memory Limit Exceeded：您的程序运行的内存已经超出了这个题目的内存限制。
Output Limit Exceeded：您的程序输出内容太多，超过了这个题目的输出限制。
Compilation Error：您的程序语法有问题，编译器无法编译。具体的出错信息可以点击链接察看。
由于之前OJ老是崩溃，使得ZZF很是烦躁。于是，她决定攻击OJ，攻击之后OJ的判题系统只会返回原有结果的第一个字母。
现在大一新生小盖伦正在奋力的刷题，可是他看不懂OJ的返回结果，聪明的你能帮帮他么？
输入
	输入包含一个大写字母，为上述OJ返回结果第一个字母之一。

输出
   对于每个字母，输出OJ所对应的返回结果，不含冒号。

样例输入 Copy
P
样例输出 Copy
Presentation Error
*/

#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);
	switch (ch) {
	case 'A':
		printf("Accepted\n");
		break;
	case 'P':
		printf("Presentation Error\n");
		break;
	case 'W':
		printf("Wrong Answer\n");
		break;
	case 'R':
		printf("Runtime Error\n");
		break;
	case 'T':
		printf("Time Limit Exceeded\n");
		break;
	case 'M':
		printf("Memory Limit Exceeded\n");
		break;
	case 'O':
		printf("Output Limit Exceeded\n");
		break;
	case 'C':
		printf("Compilation Error\n");
		break;
	default: break;
	}

	return 0;
}