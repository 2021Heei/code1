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
//�ܳɼ������ж��ܳɼ��Ƿ���ͬ
int issum(STU* stu, int n);
//ʹ�����ֶ�����n��Ԫ���������в��ж������Ƿ���ͬ
int isname(STU* stu, int n);
//��ѧ����������
void num_up_sort(STU* stu, int n);

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
	if (issum) {
		printf("sum\n");
		print(stu, n);
	}
	else if (isname) {
		printf("name\n");
		print(stu, n);
	}
	else {
		printf("num\n");
		num_up_sort(stu, n);
		print(stu, n);
	}
	return 0;
}
//�ܳɼ������ж��ܳɼ��Ƿ���ͬ
int issum(STU* stu, int n){
	int i = 0;
	int flag = 0;//��ʼΪ0����Ϊ�ܳɼ���ͬ
	//ð������ - ����
	for (i = 0; i < n - 1; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (stu[j].sum != stu[j + 1].sum)
				flag = 1;
			if (stu[j].sum < stu[j + 1].sum) {
				STU t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
	return flag;
}
//ʹ�����ֶ�����n��Ԫ���������в��ж������Ƿ���ͬ
int isname(STU* stu, int n) {
	int i = 0;
	int flag = 0;//��ʼΪ0����Ϊ�ܳɼ���ͬ
	//ð������ - ����
	for (i = 0; i < n - 1; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			//��������������ֲ����
			if (strcmp(stu[j].name, stu[j + 1].name))
				flag = 1;
			if (strcmp(stu[j].name, stu[j+1].name) > 0) {
				STU t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
	return flag;
}
//��ѧ����������
void num_up_sort(STU* stu, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			if (strcmp(stu[j].num, stu[j + 1].num) > 0) {
				STU t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
		}
	}
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
