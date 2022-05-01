#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int arr1[] = { 1,2,3 };
	int arr2[5] = { 1,0,3 };
	int arr3[5] = { 0 };
	int i = 0;
	printf("arr1[]  ");
	for (i = 0; i < 3; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2[5]  ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	printf("arr3[5]  ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr3[i]);
	}

	return 0;
}

#include <stdio.h>

int main() {
	char arr1[] = { 'a','b','c','d' };
	char arr2[4] = { 'a','b','c','d' };
	char arr3[] = "abcd";
	char arr4[5] = { 'a','b','c','d','\0'};

	printf("arr1[ ]	%d\n", sizeof(arr1));
	printf("arr2[4] %d\n", sizeof(arr2));
	printf("arr3[ ] %d\n", sizeof(arr3));
	printf("arr4[5] %d\n", sizeof(arr4));

	return 0;
}

#include <stdio.h>

int main() {
    //数组初始化
    int arr[10] = { 0 };
    int i = 0;
    //循环输出每个元素的值
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //循环输入每个整型数组元素的值
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    //循环输出每个元素的值
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
    int a = sizeof(arr);
    int b = sizeof(arr[0]);
    int c = sizeof(arr) / sizeof(arr[0]);
    printf("sizeof(arr) = %d\n", a);
    printf("sizeof(arr[0]) = %d\n", b);
    printf("sizeof(arr) / sizeof(arr[0]) = %d\n", c);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }
    int arr[3][4];
    int i = 0;
    for (i = 0; i < 3; i++) {
        int j = 0;
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        } 
    }
    for (i = 0; i < 3; i++) {
        int j = 0;
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
	int arr2[] = { 1,2,3 };
	int arr3[5] = { 1,0,3 };
	int arr4[5] = { 0 };
	int i = 0;
	printf("arr2[] ");
	for (i = 0; i < 3; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	printf("sizeof(arr2) = %d", sizeof(arr2));
	
	printf("arr3[5] ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");
	printf("arr4[5] ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr4[i]);
	}
	int i = 0;
	int arr4[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("arr4[][4]\n");
	for (i = 0; i < 3; i++) {
		int j = 0;
		for (j = 0; j < 4; j++) {
			printf("%d ", arr4[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main() {
    int arr[3][4] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int arr[3][4] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("&a[%d][%d] = %p\n", i, j , &arr[i][j]);
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int arr[10] = { 0 };
    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));

    return 0;
}
