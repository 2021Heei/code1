#define _CRT_SECURE_NO_WARNINGS 1
/*��������о������Ե��ϻ����Ը���ͳ���ԵĴ�ֹ������ƣ��ܹ���n���⣬ÿ�����ж�Ӧ��ֵ���������ܳɼ����ָ���¼ȡ�����ߣ�����д�����ҳ����ͨ�������ߵĿ������������ǵĳɼ��������ӡ��

����
��1�и�����������N ( 1<= N<=100 )��������M (1<=M<=10 )�������ߣ���������G��
��2�����������1������M�����������ֵ��
����N�У�ÿ�и���һ��������׼��֤�ţ����Ȳ�����20���ַ������������������Ŀ����m���Լ���m��������
����Ŀ����1��M����

���
�����ڵ�1����������ڷ����ߵĿ�������n�����n�а������Ӹߵ���������߿����Ŀ���������������1�ո�ָ������ж�������������ͬ�������ǿ��ŵ����������

�������� Copy
4 5 25
10 10 12 13 15
CS004 3 5 1 3
CS003 5 2 4 1 3 5
CS002 2 1 2
CS001 3 2 3 5
������� Copy
3
CS003 60
CS001 37
CS004 37
*/
/*
˼·��
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����ṹ�� 
typedef struct student {
	char num[20];
	int m;//�����������Ŀ�� 
	int test[10];//ÿ����Ŀ��Ӧ�ĵ���� 
	int sco_sum;//�ܳɼ� 
}STU;

int main() {
	//������N ( 1<= N<=100 )��������M (1<=M<=10 )�������ߣ���������G�� 
	int N = 0;
	int M = 0;
	int G = 0;
	scanf("%d%d%d", &N, &M, &G);
	//��ָ��p��̬�ڴ����ռ䣬����ÿһ������ķ��� 
	int* p = (int*)malloc(sizeof(int) * M);
	int i = 0;
	int j = 0;
	for (i = 0; i < M; i++) {
		scanf("%d", &p[i]);
	}
	//��ȡ���з� 
	getchar();
	//��̬�ڴ����ṹ������ ������Ϊѧ����N 
	STU* stu = (STU*)malloc(sizeof(STU) * N);
	for (i = 0; i < N; i++) {
		scanf("%s%d", stu[i].num, &stu[i].m);
		//ÿ��ѧ���ܳɼ���ʼ��Ϊ0 
		stu[i].sco_sum = 0;
		for (j = 0; j < stu[i].m; j++) {
			scanf("%d", &stu[i].test[j]);
			//��ѭ���õ�ÿ�����Ӧ����ţ���ȥ1��Ϊ��������ĳɼ����±� 
			stu[i].sco_sum += p[stu[i].test[j] - 1];
		}
		//	printf("%d\n",stu[i].sco_sum);
	}
	//�ڶ���һ�����Ȳ�С��ѧ������N�Ľṹ�����鴢���������G�Ŀ��� 
	STU* q = (STU*)malloc(sizeof(STU) * N);
	int cnt = 0;
	for (i = 0, j = 0; i < N; i++) {
		//�����������ֱ��ʾԭ���ṹ������p[]���½ṹ������q[]���±� 
		if (stu[i].sco_sum >= G) {
			q[j] = stu[i];
			j++;
			cnt++;
		}
	}
	//ѡ������Խṹ������q[]���� 
	for (i = 0; i < cnt - 1; i++) {
		for (j = i + 1; j < cnt; j++) {
			//printf("%d\n%d\n",q[i].sco_sum,q[j].sco_sum);
			if (q[i].sco_sum < q[j].sco_sum) {
				STU t = q[i];
				q[i] = q[j];
				q[j] = t;
			}
			else if (q[i].sco_sum == q[j].sco_sum && strcmp(q[i].num, q[j].num) > 0) {
				STU t = q[i];
				q[i] = q[j];
				q[j] = t;
			}
		}
	}
	printf("%d\n", cnt);
	for (i = 0; i < cnt; i++) {
		printf("%s %d\n", q[i].num, q[i].sco_sum);
	}

	return 0;
}