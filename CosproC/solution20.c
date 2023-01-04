#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//최소값 찾는다. 
//새 배열에서의 k번째로 큰 최대값을 찾는다. 
int func_a(int arr[][4], int n) { //arr[][4] 세로의 길이는 4줄은 무조건 함께 리턴해줘야 한다. 
	int answer = arr[0][0]; //최소값을 구하기 위해 0번방의 값을 먼저 대입하고 시작함
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//최소값 구하는 알고리즘
			if (answer > arr[i][j]) answer = arr[i][j];
		}
	}
	return answer;
}
//최소값을 제외한 배열을 얻는다. 
int func_b(int a[][4], int n, int del) {
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			//앞써 구한 최소값과 배열안의 값이 동일하다면 최소값의 값을 1000으로 변경해주어 최소값에서 제외시킴 
			if (del == a[r][c]) {
				a[r][c] = 1000;
				return 1;
			}
		}
	}
	return 0;
}
int solution(int arr[][4], int n, int k) {
	int answer = 0; //k번째로 작은 수 
	int min; //최소값 
	for (int i = 1; i <= k; i++) { //k번만큼 반복
		min = func_a(arr, n); //최소값을 구함 -> 가장 작은 최소값 구함 -> 두 번째 최소값 구함 -> k번째로 최소값 구함
		func_b(arr, n, min); //최소값을 제외시킴 -> 가장 작은 최소값 제외 -> 두번째 최소값 제외 -> k번째 최소값 제외
	}
	answer = min; ;//k번만큼 반복 돈 결과의 min을 answer에 담음 
	return answer;
}

int main() {
	int arr[][4] = { {5, 12, 4, 31}, {24, 13, 11, 2}, {43, 44, 19, 26}, {33, 65, 20, 21} };
	int len = 4;
	int k = 3;
	printf("%d", solution(arr, len, k));
}