#include <stdio.h>
#include <stdlib.h>

void print_arr1(int(*arr)[3]) { //2���� �迭 �迭 ������ �� �ޱ�
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

void print_arr2(int* arr[]) { //2���� �迭 ������ �迭 �� �̿�
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

void print_arr3(int** arr) { // 2���� �迭 ���������ͷ� �̿�
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

void print_arr4(int* arr) { //1 ���� �迭 �����ͷ� �ޱ�
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
}

void print_arr5(int arr[]) {  // 1���� �迭 �迭�� �ޱ�
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
}




int main() {
    int arr[3][3] = { {10, 20, 30}, {100, 200, 300}, {100, 200, 300} };
    int* ar3[3];
    int** ar2 = (int**)malloc(sizeof(int*) * 10);

    for (int i = 0; i < 3; i++) {
        ar2[i] = (int *)malloc(sizeof(int) * 3);
        ar3[i] = (int *)malloc(sizeof(int) * 3);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = 1; ar2[i][j] = 1;
        }
    }

    int arr1[3] = { 1,2,3 };

}