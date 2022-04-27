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
        printf("找到了，下标为：%d\n", index);
    }
    else {
        printf("没找到\n");
    }
    return 0;
}
//二分查找(折半查找)，找到了返回数组下标，找不到返回-1
int Binary_search(int arr[], int sz, int input) {
    //数组左下标
    int left = 0;
    //数组右下标
    int right = sz - 1;
    //数组中间下标
    int middle = 0;
    while (left <= right) {
        middle = left + (right - left) / 2;
        //待查找input小于数组中间元素，则input只可能在数组左半边
        if (input < arr[middle]) {
            right = middle - 1;
        }
        //待查找input大于数组中间元素，则input只可能在数组右半边
        else if (input > arr[middle]) {
            left = middle + 1;
        }
        //待查找input等于于数组中间元素
        else {
            return middle;
        }
    }
    return -1;
}