#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int func_a(char p[][20], int n);
int func_a(char (*p)[20], int n) {
	//전달받은 2차 배열의 각 행의 문자열들을 n개 출력한다.
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]);
	}
	//2차 배열의 모든 문자들을 처리하려는 경우
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 20; k++) {
			p[i][k]; //char형 변수이다
		}
	}
	return 0;
}
int main() {
	char titles[5][20] = { "first", "second", "third", "fourth", "first" };
	//2차 배열의 전달
	func_a(titles, 5);
}