#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int month, int day) {
	int answer = 0; 
	int lastDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; i < month - 1; i++) answer += lastDay[i];
	answer += day;
	return answer - 1; //1�� 1�ϰ� ������ �ִ� ���� ���ϴ� ���̹Ƿ� 1�� 1�� ����� �ؼ� -1�� ���ش�. 
}
int main() {
	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	int start = solution(start_month, start_day);
	int end = solution(end_month, end_day);
	printf("%d", end - start);
}