#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int arr[3][4], int row, int column);

int main() {
    int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int ret = Add(arr, 3, 4);

    printf("ret = %d", ret);
    return 0;
}
�����ά��������Ԫ��֮��
������ͬЧ���Ķ�ά������Ϊ�����Ķ��巽ʽ
int Add(int arr[][4], int row, int column)
int Add(int (*p)[4], int row, int column)
int Add(int arr[3][4], int row, int column) {

    int sum = 0;
    int i = 0;
    for (i = 0; i < row; i++) {
        int j = 0;
        for (j = 0; j < column; j++) {
            sum += arr[i][j];
        }
    }
    return sum;

}