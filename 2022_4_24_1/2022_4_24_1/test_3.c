//#define _CRT_SECURE_NO_WARNINGS 1
//
////��������ʱ������ʵ�����ַ������ȵĺ���
///*
//˼·�����ܴ�����ʱ����������ʹ�ú����ݹ���á�
//ָ��pstr����ָ���ַ����ĵ�һ��Ԫ�أ�����Ϊ'\0'��ָ��pstr����ƶ�һλ
//��Ϊ�������²���������ָ���ַ����ĵڶ���Ԫ�أ�ֱ��ָ��ָ��'\0'ʱ����0
//*/
//#include <stdio.h>
//
//int my_strlen2(char* pstr);
//
//int main() {
//	char arr[20] = { 0 };
//	gets(arr);
//	int t = my_strlen2(arr);
//
//	printf("%d\n", t);
//	return 0;
//}
//int my_strlen2(char* pstr) {
//	if (*pstr != '\0') {
//		return 1 + my_strlen2(pstr + 1);
//	}
//	else {
//		return 0;
//	}
//}