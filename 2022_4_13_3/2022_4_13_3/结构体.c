
//ĳ��λ����ѡ�٣���5λ��ѡ�ˣ�zhang��wang��zhao��liu��miao����д����ͳ��ÿ�����õ�Ʊ����Ҫ��ÿ�˵���Ϣ����������֣�name��votes���ֱ���������������Ʊ����ÿ���˵���Ϣ��һ���ṹ������ʾ��5���˵���Ϣʹ�ýṹ�����顣
//
//
//
//����
//
//
//��������һ������n����ʾһ��ѡƱ��������n�У�ÿ����һ����СдӢ����ĸ��ɵ��ַ�������ʾ����5����ѡ��֮һ��
//
//
//
//���
//
//
//���5�У���zhang��wang��zhao��liu��miao��˳�����5����ѡ�˵�����������Ʊ�����ÿո������
//
//
//
//�������� Copy
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
//������� Copy
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
	getchar();//���ջ��з�
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