#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a[3][4][5] = { 0 };
	return 0;
}

#include <stdio.h>

int main() {
    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };

    printf("&arr = %p\n", &arr);
    printf("&arr[0] = %p\n", &arr[0]);
    printf("&arr+1 = %p\n", &arr+1);
    printf("&arr[0]+1 = %p\n", &arr[0]+1);

    return 0;
}

#include <stdio.h>

void cmp_sort(int arr[], int sz);
int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    cmp_sort(arr, sz);
    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void cmp_sort(int arr[], int sz) {
    int i = 0;
    for (i = 0; i < sz; i++) {
        int j = 0;
        for (j = i + 1; j < sz; j++) {
            if (arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
#include <stdio.h>

int Add(int arr[], int sz);

int main() {
    int arr[5] = { 1,2,3,4,5 };
    printf("main sizeof(arr) = %d\n", sizeof(arr));
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = 0;
    ret = Add(arr, sz);

    printf("ret = %d", ret);
    return 0;
}
int Add(int arr[], int sz) {
    printf("Add sizeof(arr) = %d\n", sizeof(arr));
    int i = 0;
    int sum = 0;
    for (i = 0; i < sz; i++) {
        sum += arr[i];
    }
    return sum;
}

#include <stdio.h>

int Add(int arr[3][4], int row, int column);

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printf("main sizeof(arr) = %d\n", sizeof(arr));

    printf("main sizeof(int(*)[4]) = %d\n", sizeof(int(*)[4]));

    printf("main sizeof(arr[0]) = %d\n", sizeof(arr[0]));
    printf("main sizeof(*(arr+0)) = %d\n", sizeof(*(arr + 0)));

    printf("main sizeof(arr[0][0]) = %d\n", sizeof(arr[0][0]));
    printf("main sizeof(*(*(arr+0)+0)) = %d\n", sizeof(sizeof(*(*(arr + 0) + 0))));
    int ret = Add(arr, 3, 4);
    printf("ret = %d", ret);

    return 0;
}
int Add(int arr[3][4], int row, int column) {
    //这里的arr实际上是数组指针，sizeof算出的是地址的大小
    printf("Add sizeof(arr) = %d\n", sizeof(arr));
    //这里算的是数组指针的大小，是一个指针，sizeof算出的是地址的大小
    printf("Add sizeof(int(*)[4]) = %d\n", sizeof(int(*)[4]));
    //这里的arr[0]是二维数组的首元素，是一个一维数组名。而数组名单独作为
    // sizeof的操作数时数组名代表整个一维数组，求出的是整个一维数组的大小。
    //函数参数二维数组定义为3行4列，即每一个一维数组是四个整型元素
    printf("Add sizeof(arr[0]) = %d\n", sizeof(arr[0]));
    //arr本质是指针数组(int(*)[4]),指向一个一维数组。
    //(arr+0)解引用则是通过指针数组访问了其指向的一维数组，
    //故*(arr+0)相当于*arr相当于arr[0],是一维数组名。
    printf("Add sizeof(*(arr+0)) = %d\n", sizeof(*(arr + 0)));
    
    //arr[0][0]是二维数组中第一个一维数组中的的一个整型元素的值
    printf("Add sizeof(arr[0][0]) = %d\n", sizeof(arr[0][0]));
    //*(arr+0)是一维数组的数组名，*(arr+0)+0解引用则是通过一维数组名
    //访问一维数组的第一个元素，*(*(arr+0)+0)相当于*(arr[0]+0)相当于arr[0][0]
    printf("Add sizeof(*(*(arr+0)+0)) = %d\n", sizeof(sizeof( *(*(arr+0)+0) )));

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

#include <stdio.h>
#include <assert.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	assert(n >= 0);
	for (i = 0; i < n; i++) {
		printf("%d ", i);
	}
	return 0;
}