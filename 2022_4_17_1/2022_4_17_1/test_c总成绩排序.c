#define _CRT_SECURE_NO_WARNINGS 1
/*
��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ����밴���¹������򣺰��ܳɼ������������ܳɼ���ͬ����������������������Ҳ��ͬ������ѧ���������С� 




���� 

��������һ������n(1<=n<=100)����ʾѧ�������� 
 Ȼ������n�У�ÿ�а���һ��ѧ������Ϣ��ѧ�ţ�12λ���������������ո��Ҳ�����20λ�����Լ�3����������ʾ3�ſγɼ�������֮���ÿո������ 




��� 

��������ĳɼ�������ʽ����������� 




�������� Copy 

3
541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010190 Fangfang 89 88 85



������� Copy 

541207010189 Wangli 85 87 99 271
541207010190 Fangfang 89 88 85 262
541207010188 Zhangling 89 78 95 262

*/
/*
˼·�����ڶ����жϣ����ܳɼ�����->��������->ѧ����������ȼ�����
Ҫʹ�ö��ifelse���
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����ṹ��
typedef struct student {
	char num[20];
	char name[20];
	int sco1;
	int sco2;
	int sco3;
	int sum;//�ܳɼ�
}STU;

//����ṹ�����n��Ԫ��
void print(STU* stu, int n);

int main() {
	int n = 0;
	scanf("%d", &n);
	getchar();//��ȡ�ַ�
	//��̬�ڴ����
	STU* stu = (STU*)malloc(sizeof(STU) * n);
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d",
			stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
		//����ÿ��ѧ���ܳɼ�
		stu[i].sum = stu[i].sco1 + stu[i].sco2 + stu[i].sco3;
	}
	int j = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			//����ܳɼ�С�ͽ���
			if (stu[i].sum < stu[j].sum) {
				STU t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
			//����ܳɼ���ͬ�����ִ�ͽ���
			else if (stu[i].sum == stu[j].sum && strcmp(stu[i].name, stu[j].name) > 0) {
				STU t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
			//����ܳɼ���ͬ��������ͬ��ѧ�Ŵ�ͽ���
			else if (stu[i].sum == stu[j].sum && strcmp(stu[i].name, stu[j].name) == 0 &&
				strcmp(stu[i].num, stu[j].num) > 0) {
				STU t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
		}
	}
	//����ṹ����
	print(stu, n);

	return 0;
}

//����ṹ�����n��Ԫ��
void print(STU* stu, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%s %s %d %d %d %d\n",
			stu[i].num, stu[i].name, stu[i].sco1, stu[i].sco2, stu[i].sco3,
			stu[i].sum);
	}
}