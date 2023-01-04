#include<stdio.h>
#include<stdlib.h>

//1월 1일부터 떨어진 수 구하기 
int func_a(int month, int day) {
	int answer = 0;
	int month_list[] = {31, 28, 31, 30 , 32, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; i < month - 1; i++) {
		answer += month_list[i];
	}
	answer += day - 1;
	return answer;
}
int solution(int start_month, int start_day, int end_month, int end_day) {
	int start = func_a(start_month, start_day);
	int end = func_a(end_month, end_day);
	return end - start;
}
int main() {
	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	printf("%d", solution(start_month, start_day, end_month, end_day));
}