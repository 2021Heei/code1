#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef struct store {
	double value;
	int num;
}STO;


int main() {
	int n,m,i,j;
	scanf("%d", &n);
	scanf("%d", &m);

	STO stoe[10];
	for (i = 0; i < m; i++) {
		scanf("%lf%d", &stoe[i].value, &stoe[i].num);
	}
	//对结构体进行升序排列，比较排序
	for (i = 0; i < m-1; i++) {
		for (j = i + 1; j < m; j++) {
			if (stoe[i].value > stoe[j].value) {
				STO t = stoe[i];
				stoe[i] = stoe[j];
				stoe[j] = t;
			}
		}
	}

	double sum = 0;
	for (i = 0; i < m; i++) {
		if (stoe[i].num < n) {
			sum += stoe[i].value * stoe[i].num;
			n = n - stoe[i].num;
		}
		else {
			sum += stoe[i].value * n;
			break;
		}
	}
	printf("%.2lf\n", sum);

	return 0;
}