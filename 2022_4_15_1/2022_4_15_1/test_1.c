#define _CRT_SECURE_NO_WARNINGS 1
/*

һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ�����ʵ�����²��ҹ��ܣ�����һ��ѧ����ѧ�ţ������ѧ��ѧ�š�������4�ſγ̳ɼ�





����


��������һ������n(1<=n<=100)����ʾѧ��������
 Ȼ������n�У�ÿ�а���һ��ѧ������Ϣ��ѧ�ţ�12λ���������������ո��Ҳ�����20λ�����Լ�3����������ʾ3�ſγɼ�������֮���ÿո������
 ���һ������һ��ѧ��num



���


��ѧ��num���ڣ������ѧ����ѧ�š�������3�ſγ̳ɼ�������ѧ�Ų����ڣ��������Not Found����



�������� Copy

3
541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010189 Fangfang 85 68 76
541207010188




������� Copy

541207010188 Zhangling 89 78 95

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����ṹ�� 
struct student {
	char num[20];
	char name[20];
	int sco1;
	int sco2;
	int sco3;
};

int main() {
	int n, i;
	scanf("%d", &n);
	getchar();//��ȡ���з� 

	//����ṹ��ָ�룬��̬�ڴ���� 
	struct student* stu;
	stu = (struct student*)malloc(sizeof(struct student) * n);

	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
	}
	struct student t;
	//	getchar();
	scanf("%s", t.num);

	int flag = 0;
	for (i = 0; i < n; i++) {
		if (strcmp(t.num, stu[i].num) == 0) {
			t = stu[i];
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%s %s %d %d %d\n", t.num, t.name, t.sco1, t.sco2, t.sco3);
	else
		printf("Not Found\n");

	return 0;
}