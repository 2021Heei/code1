#define _CRT_SECURE_NO_WARNINGS 1
/*������֪������ÿ���ύOJ���������µļ��ַ��ؽ����
Accepted�����ĳ�������ȷ�ģ���ϲ��
Presentation Error����Ȼ���ĳ���ò���������ȷ�Ľ���������������ĸ�ʽ�е����⡣������������Ƿ���˻������˿ո�' '�����Ʊ����'\t'�����߻��з���'\n'����
Wrong Answer�������������һ����Ϊ���㷨�����⡣������ӿ��Բ鿴����Ĵ�����Ϣ�����Եõ������ʾ��
Runtime Error������ʱ�������һ���ǳ����������ڼ�ִ���˷Ƿ��Ĳ�����ɵġ�һ������scanf�����ĵ�ַ�б���ȱ�ٷ���&��ָ�롢�����±�Խ�硢����Ϊ0����ջ����ȡ�
Time Limit Exceeded�����ĳ������е�ʱ���Ѿ������������Ŀ��ʱ�����ơ�
Memory Limit Exceeded�����ĳ������е��ڴ��Ѿ������������Ŀ���ڴ����ơ�
Output Limit Exceeded�����ĳ����������̫�࣬�����������Ŀ��������ơ�
Compilation Error�����ĳ����﷨�����⣬�������޷����롣����ĳ�����Ϣ���Ե�����Ӳ쿴��
����֮ǰOJ���Ǳ�����ʹ��ZZF���Ƿ��ꡣ���ǣ�����������OJ������֮��OJ������ϵͳֻ�᷵��ԭ�н���ĵ�һ����ĸ��
���ڴ�һ����С�������ڷ�����ˢ�⣬������������OJ�ķ��ؽ�������������ܰ����ô��
����
	�������һ����д��ĸ��Ϊ����OJ���ؽ����һ����ĸ֮һ��

���
   ����ÿ����ĸ�����OJ����Ӧ�ķ��ؽ��������ð�š�

�������� Copy
P
������� Copy
Presentation Error
*/

#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);
	switch (ch) {
	case 'A':
		printf("Accepted\n");
		break;
	case 'P':
		printf("Presentation Error\n");
		break;
	case 'W':
		printf("Wrong Answer\n");
		break;
	case 'R':
		printf("Runtime Error\n");
		break;
	case 'T':
		printf("Time Limit Exceeded\n");
		break;
	case 'M':
		printf("Memory Limit Exceeded\n");
		break;
	case 'O':
		printf("Output Limit Exceeded\n");
		break;
	case 'C':
		printf("Compilation Error\n");
		break;
	default: break;
	}

	return 0;
}