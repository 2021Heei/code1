#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

int Binary_search(int arr[], int sz, int input);

int main() {
    int arr[] = { 1,3,5,7,9,10,13,15,17,19 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int input = 0;
    scanf("%d", &input);

    int index = Binary_search(arr, sz, input);
    if (index != -1) {
        printf("�ҵ��ˣ��±�Ϊ��%d\n", index);
    }
    else {
        printf("û�ҵ�\n");
    }
    return 0;
}
//���ֲ���(�۰����)���ҵ��˷��������±꣬�Ҳ�������-1
int Binary_search(int arr[], int sz, int input) {
    //�������±�
    int left = 0;
    //�������±�
    int right = sz - 1;
    //�����м��±�
    int middle = 0;
    while (left <= right) {
        middle = left + (right - left) / 2;
        //������inputС�������м�Ԫ�أ���inputֻ��������������
        if (input < arr[middle]) {
            right = middle - 1;
        }
        //������input���������м�Ԫ�أ���inputֻ�����������Ұ��
        else if (input > arr[middle]) {
            left = middle + 1;
        }
        //������input�����������м�Ԫ��
        else {
            return middle;
        }
    }
    return -1;
}