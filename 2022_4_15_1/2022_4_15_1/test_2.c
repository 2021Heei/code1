#define _CRT_SECURE_NO_WARNINGS 1

/*


��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ�����֪�óɼ���ѧ��������������ʵ�֣����һ���µ�ѧ����Ϣ����ʹ�ɼ����԰�ѧ������������ӵ�ѧ��������ѧ���ظ��������������Ϣ���ܾ���ӡ�



����


��������һ������n(1<=n<=100)����ʾѧ��������
 Ȼ������n�У�ÿ�а���һ��ѧ������Ϣ��ѧ�ţ�12λ���������������ո��Ҳ�����20λ�����Լ�3����������ʾ3�ſγɼ�������֮���ÿո������
 ���һ������һ������ӵ�ѧ����Ϣ������ѧ�š�������3�ſγɼ�



���


������ӵ�ѧ��������ѧ���ظ��������ֻ��һ�С�error!�����������n+1�У�����Ӻ�ĳɼ�����Ϣ��



�������� Copy

3
541207010188 Zhangling 78 95 55
541207010189 Wangli 87 99 88
541207010191 Fangfang 68 76 75
541207010190 Lilei 68 79 82



������� Copy

541207010188 Zhangling 78 95 55
541207010189 Wangli 87 99 88
541207010190 Lilei 68 79 82
541207010191 Fangfang 68 76 75



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
	getchar();//��ȡ���з�
	STU* stu = (STU*)malloc(sizeof(STU) * (n+1));//��̬�ڴ����
	for (i = 0; i < n; i++) {
		scanf("%s %s %d %d %d", 
			stu[i].num, stu[i].name, &stu[i].sco1, &stu[i].sco2, &stu[i].sco3);
	}
	STU t;
	scanf("%s %s %d %d %d", t.num, t.name, &t.sco1, &t.sco2, &t.sco3);

	/*��������ṹ�������һ��Ԫ�ؿ�ʼ�����������ֵ�Ƚϣ������ֵ��ʱ����Ӧ����Ԫ��
	����ƶ�һλ*/
	//��־������¼�����ʽ
	int flag = 1;
	for (i = n-1; i >= 0; i--) {
		if (strcmp(t.num, stu[i].num) < 0) {
			stu[i + 1] = stu[i];
		}
		else if (strcmp(t.num, stu[i].num) > 0) {
			stu[i + 1] = t;	
			break;
		}
		else {
			flag = 0;
		}
	}
	//�������ѧ��������������Сʱ����Ҫ���ж�
	if (i < 0)
		stu[0] = t;

	if (flag) {
		for (i = 0; i < n + 1; i++) {
			printf("%s %s %d %d %d\n", 
				stu[i].num, stu[i].name, stu[i].sco1, stu[i].sco2, stu[i].sco3);
		}
	}
	else {
		printf("error!\n");
	}

	return 0;
}