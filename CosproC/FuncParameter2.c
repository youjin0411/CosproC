#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		arr[i] = i + 100;
	}
	return arr; //동적할당된 배열의 시작주소를 반환한다. 
}
int main() {
	int* result;
	int len = 10;
	result = solution(len); //배열의 시작주소를 반환받는다
	
	for (int i = 0; i <len  ; i++) { //반환받은 배열의 길이를 알 수 없다.
		printf("%d\n", result[i]);
	}
	return 0;
}