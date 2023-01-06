#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len은 2차원 배열 arr의 행(세로) 길이입니다.
// arr_col_len은 2차원 배열 arr의 열(가로) 길이입니다.
// arr[i][j]는 arr의 i번째 행의 j번째 열에 저장된 값을 의미합니다.
void solution(int arr[][4], int arr_row_len, int arr_col_len, int k) {
    int answer = 0;
    int cnt = 0;
    int* arrsort = (int*)malloc(sizeof(int) * arr_col_len * arr_row_len);
    for (int i = 0; i < arr_row_len; i++) {
        for (int j = 0; j < arr_col_len; j++) {
            arrsort[cnt++] = arr[i][j];
        }
    }
    for (int i = 0; i < arr_row_len * arr_col_len; i++) {
        for (int j = 0; j < arr_row_len * arr_col_len - 1; j++) {
            if (arrsort[j] > arrsort[j + 1]) {
                int temp = arrsort[j + 1];
                arrsort[j + 1] = arrsort[j];
                arrsort[j] = temp;
            }
        }
    }
    printf("%d", arrsort[k - 1]);
}
int main() {
    int arr[][4] = {{5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21}};
    int arr_row_len = 4;
    int arr_col_len = 4;
    int k = 4;
    solution(arr, arr_row_len, arr_col_len, k);
}