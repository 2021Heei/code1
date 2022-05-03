#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
char* my_strcpy(char* destine, const char* sourse);

int main() {
	char str[20] = "##############";
	char* p = "hello world";
	//strcpy(str, p);
	
	printf("%s\n", my_strcpy(str, p));

	return 0;
}
//实现字符串拷贝函数
char* my_strcpy(char* destination, const char* sourse) {
	char* t = destination;
	while (*sourse != '\0') {
		*destination = *sourse;
		destination++;
		sourse++;
	}
	*destination = '\0';
	/*while (*destination++ = *sourse++) {
		;
	}*/
	return t;
}

#include <stdio.h>
#include <string.h>

void my_strcat1(char* destination, char* sourse);
void my_strcat2(char* destination, char* sourse);
char* my_strcat3(char* destination, char* sourse);

int main() {
	char str[20] = "#333";
	char* p = "hello world";
	//strcat(str, p);
	//my_strcat1(str, p);
	//my_strcat2(str, p);
	
	printf("%s\n", strcat(str, str));
	

	return 0;
}

//模拟实现字符串连接函数
void my_strcat1(char* destination, char* sourse) {
	while (*destination++ != '\0') {

	}
	destination--;
	while (*sourse != '\0') {
		*destination = *sourse;
		destination++;
		sourse++;
	}
	*destination = '\0';
}

void my_strcat2(char* destination, char* sourse) {
	while (*destination++) {

	}
	destination--;
	while ((*destination++ = *sourse++) != '\0') {
		;
	}
}

char* my_strcat3(char* destination, const char* sourse) {
	char* t = destination;
	while (*destination++) {

	}
	destination--;
	while ((*destination++ = *sourse++) != '\0') {
		;
	}
	return t;
}

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp1(char* ps1, char* ps2);
int my_strcmp2(char* ps1, char* ps2);
int my_strcmp3(char* ps1, char* ps2);

int main() {
	char *ps1 = "abc";
	char* ps2 = "abcd";
	//int ret = strcmp(ps1, ps2);
	int ret1 = 0;
	int ret2 = 0;
	int ret3 = 0;
	ret1 = my_strcmp1(ps1, ps2);
	ret2 = my_strcmp2(ps1, ps2);
	ret3 = my_strcmp3(ps1, ps2);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("%d\n", ret3);

	return 0;
}

//模拟字符串比较函数
int my_strcmp1(char* ps1, char* ps2) {
	assert(ps1 != NULL && ps2 != NULL);
	while (*ps1 != '\0' || *ps2 != '\0') {
		if (*ps1 > *ps2) {
			return 1;
		}
		else if(*ps1 < *ps2){
			return -1;
		}
		ps1++;
		ps2++;
	}
	if (*ps1 == '\0' && *ps2 == '\0') {
		return 0;
	}
}
//改进比较函数
int my_strcmp2(char* ps1, char* ps2) {
	assert(ps1 != NULL && ps2 != NULL);
	//两个指针均为'\0'时，结束循环
	while (*ps1 != '\0' || *ps2 != '\0') {
		if (*ps1++ != *ps2++) {
			return *--ps1 - *--ps2;
		}
	}
	if (*ps1 == '\0' && *ps2 == '\0') {
		return 0;
	}
}

//再改进
int my_strcmp3(const char* ps1, const char* ps2) {
	assert(ps1 != NULL && ps2 != NULL);
	//两个指针均为'\0'时，结束循环
	while (*ps1 == *ps2) {
		ps1++;
		ps2++;
	}
	if (*ps1 != *ps2) {
		return *ps1 - *ps2;
	}
	else {
		return 0;
	}
}

//带限制的字符串函数
/*
strncpy
strncat
strncmp
*/

//strncpy的实现
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncpy1(char* destination, const char* sourse, size_t num);

int main() {
	char str[20] = "##############";
	char* p = "hello";
	size_t num = 8;
	//strncpy(str, p, num);

	//printf("%s\n", strncpy(str, p, num));
	printf("%s\n", my_strncpy1(str, p, num));
	return 0;
}

//模拟实现有限制的字符串拷贝
char* my_strncpy1(char* destination, const char* sourse, size_t num){
	assert(destination && sourse);
	char* t = destination;
	while ((*destination++ = *sourse++) != '\0') {
		num--;
	}

	while (--num) {
		*destination = '\0';
	}
	return t;
}

//模拟有限制的字符串连接函数
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncat(char* destination, const char* sourse, size_t num);

int main() {
	char str[20] = "#####";
	char* p = "hello world";
	size_t num = 89;
	//printf("%s\n",strncat(str, p, num));
	printf("%s\n", my_strncat(str, p, num));

	return 0;
}

//
char* my_strncat(char* destination, const char* sourse, size_t num) {
	char* t = destination;
	assert(destination && sourse);
	while (*destination++ != '\0') {
		;
	}
	destination--;
	//找到第一个字符串的结尾处，开始连接，有两种情况：
	//1.num小于后一个字符串长度，则后一字符串复制num个字符之后，
	//停止复制，并在前一个字符串末尾加上一个'\0'
	//2.num大于等于后一个字符串长度，在后一个字符串完全复制完(包含末尾的
	//'\0')直接停止复制
	while (num--) {
		if ((*destination++ = *sourse++) == 0) {
			return t;
		}
	}
	*destination = '\0';

	return t;
}

//模拟实现字符串比较函数
#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strncmp(const char* str1, const char* str2, size_t num);

int main() {
	char s1[20] = "abcd";
	char s2[20] = "abc";
	size_t num = 4;
	//int ret = strncmp(s1, s2, num);
	int ret = my_strncmp(s1, s2, num);
	printf("%d\n", ret);

	return 0;
}
//
int my_strncmp(const char* str1, const char* str2, size_t num) {
	assert(str1 && str2);
	while (num-- && *str1++ == *str2++) {
		;
	}
	if (*--str1 != *--str2) {
		return *str1 - *str2;
	}
	else {
		return 0;
	}
}