#define _CRT_SECURE_NO_WARNINGS 1

/*��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
˼·������һ��������19������19�ĸ�λ�Ƿ�Ϊ9��������ʮλ�Ƿ���9���綼��Ϊ9
�ͽ����жϣ�������һ�����ֵ��ж�
*/
#include <stdio.h>

int main() {
	int cnt = 0;
	int i = 0;
	//1~100����
	for (i = 1; i <= 100; i++) {

		//int  flag = 0;
		int x = i;
		//�ж�ÿ�����ֵ�ѭ��
		while (x != 0) {
			if (x % 10 == 9) {
				//if(flag == 0)
				//	printf("%d\n", i);
				cnt++;
				//flag = 1;

			}
			x = x / 10;
		}

	}
	printf("%d\n", cnt);

	return 0;
}