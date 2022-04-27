#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void two_num_swap(int* px, int* py);
void arr_print(int arr[], int sz);
void compare_sort(int arr[], int sz);


int main() {
    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    //求数组的长度
    int sz = sizeof(arr) / sizeof(arr[0]);

    printf("排序前：\n");
    arr_print(arr, sz);
    compare_sort(arr, sz);
    printf("排序后：\n");

    arr_print(arr, sz);
    return 0;
}
//
void compare_sort(int arr[], int sz) {
    int i = 0;
    for (i = 0; i < sz - 1; i++) {
        int j = 0;
        for (j = i + 1; j < sz; j++) {
            if (arr[i] > arr[j]) {
                two_num_swap(&arr[i], &arr[j]);
            }
        }
    }
    return;
}
//
void two_num_swap(int* px, int* py) {
    int t = *px;
    *px = *py;
    *py = t;
}
//
void arr_print(int arr[], int sz) {
    int i = 0;
    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}