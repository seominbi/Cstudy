#include <stdio.h>
#include <stdlib.h>

void print_arr1(int(*arr)[3]) { //2차원 배열 배열 포인터 로 받기
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

void print_arr2(int* arr[]) { //2차원 배열 포인터 배열 로 이용
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

void print_arr3(int** arr) { // 2차원 배열 이중포인터로 이용
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

void print_arr4(int* arr) { //1 차원 배열 포인터로 받기
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
}

void print_arr5(int arr[]) {  // 1차원 배열 배열로 받기
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