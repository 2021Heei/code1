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
    //�����arrʵ����������ָ�룬sizeof������ǵ�ַ�Ĵ�С
    printf("Add sizeof(arr) = %d\n", sizeof(arr));
    //�������������ָ��Ĵ�С����һ��ָ�룬sizeof������ǵ�ַ�Ĵ�С
    printf("Add sizeof(int(*)[4]) = %d\n", sizeof(int(*)[4]));
    //�����arr[0]�Ƕ�ά�������Ԫ�أ���һ��һά����������������������Ϊ
    // sizeof�Ĳ�����ʱ��������������һά���飬�����������һά����Ĵ�С��
    //����������ά���鶨��Ϊ3��4�У���ÿһ��һά�������ĸ�����Ԫ��
    printf("Add sizeof(arr[0]) = %d\n", sizeof(arr[0]));
    //arr������ָ������(int(*)[4]),ָ��һ��һά���顣
    //(arr+0)����������ͨ��ָ�������������ָ���һά���飬
    //��*(arr+0)�൱��*arr�൱��arr[0],��һά��������
    printf("Add sizeof(*(arr+0)) = %d\n", sizeof(*(arr + 0)));
    
    //arr[0][0]�Ƕ�ά�����е�һ��һά�����еĵ�һ������Ԫ�ص�ֵ
    printf("Add sizeof(arr[0][0]) = %d\n", sizeof(arr[0][0]));
    //*(arr+0)��һά�������������*(arr+0)+0����������ͨ��һά������
    //����һά����ĵ�һ��Ԫ�أ�*(*(arr+0)+0)�൱��*(arr[0]+0)�൱��arr[0][0]
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