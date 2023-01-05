#include<stdio.h>
#include<stdlib.h>

int* solution(int a[][3], int b[][3], int len) {
	int* answer = (int*)malloc(sizeof(int) * 2);
	memset(answer, 0, sizeof(int) * 2);
	int k = 0; 
	int atotal = 0;
	int btotal = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 3; j++){
			atotal += a[i][j];
			btotal += b[i][j];
		}
	}
	double total = atotal + btotal;
	answer[0] = (atotal / total) * 100;
	answer[1] = (btotal / total) * 100;
	return answer;
}
int main() {
	int a[][3] = { {3, 2, 7}, {4, 2, 6}, {5, 3, 8}, {7, 6, 8} };
	int b[][3] = { {30, 50, 120}, {70, 90, 180}, {120, 150, 260}, {102, 120, 104} };
	int len = 4;
	int* result = solution(a, b, len);
	for (int i = 0; i < 2; i++) {
		printf("%d  ", result[i]);
	}
}