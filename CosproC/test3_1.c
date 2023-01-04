#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//이동거리 차이를 구하는 함수
//출발 이후 두 사람의 거리 차이가 10km이상 차이 날 때 시간을 리턴
double solution(int a, int b) {
	double answer = 0; 
	int diff = (a > b) ? a - b : b - a; //삼항연산자  -> 2
	answer = 10.0 / diff; // 10 / 2 = 5
	return answer * 60; // 5 * 60
}
int main() {
	int a = 4; // 4 * 5 = 20; 
	int b = 2; // 2 * 5 = 10
	printf("%f", solution(a, b));
}