#define _CRT_SECURE_NO_WARNINGS 1

/*


��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ����밴Ҫ�����������������1���򰴵�1�ſγɼ���������ɼ���������Ϊi��1<=i<=3)���򰴵�i�ſγɼ���������ɼ���



����


��������һ������n(1<=n<=100)����ʾѧ��������
 Ȼ������n�У�ÿ�а���һ��ѧ������Ϣ��ѧ�ţ�12λ���������������ո��Ҳ�����20λ�����Լ�3����������ʾ3�ſγɼ�������֮���ÿո������
 ���һ������һ������i����ʾҪ�󰴵�i�ſγɼ�������������������ſγɼ���ͬ����ѧ������



���


�������i�ſν�������Ľ������ʽ��������



�������� Copy

3
541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010190 Fangfang 85 68 76
1




������� Copy

541207010188 Zhangling 89 78 95
541207010189 Wangli 85 87 99
541207010190 Fangfang 85 68 76


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {//����ṹ��
	char num[20];
	char name[20];
	int sco1;
	int sco2;
	int sco3;
}STU;
int main() {
	int n,i;
	scanf("%d", &n);
	getchar();

	STU* stu;
	//��̬�ڴ����
	stu = (STU*)malloc(sizeof(STU) * n);
	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d", 
			stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
	}
	STU t;
	scanf("%s", t.num);
	//��k��¼Ҫɾ�����±꣬������ж�k��ֵ
	int k = -1;
		for (i = 0; i < n; i++) {
			if (strcmp(t.num, stu[i].num) == 0) {
				k = i;
				break;
			}
	}
		if (k == -1) {
			printf("error!\n");
		}
		else {
			for (i = k; i < n - 1; i++) {
				stu[i] = stu[i + 1];
			}
			for (i = 0; i < n - 1; i++)
				printf("%s %s %d %d %d\n",
					stu[i].num, stu[i].name, stu[i].sco1, stu[i].sco2, stu[i].sco3);
		}

	return 0;
}