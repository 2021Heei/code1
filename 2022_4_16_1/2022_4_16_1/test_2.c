#define _CRT_SECURE_NO_WARNINGS 1
/*����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
˼·��������ͬ����ĸ�ӵڶ��ʼ����ǰһ���1����һ��������¼�����ŵĹ���仯
*/
#include <stdio.h>

int main() {
	double sum = 0.0;
	int i;
	double flag = 1.0;
	for (i = 1; i <= 100; i++) {
		sum += flag / i;
		flag = -flag;
	}
	printf("%lf\n", sum);

	return 0;
}