#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct student {
    char name[10];
    char num[20];
    int class;
    int score;
    char id[20];
};

int main() {
    struct student a = { "xiaozha","10002",1,90,"41XXXXXXXXXXXXXX" };
    struct student* p = &a;
    printf("%s %s %d %d %s", p->name, p->num, p->class, p->score, p->id);
    return 0;
}