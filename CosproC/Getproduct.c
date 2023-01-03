#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int price, char* grade) {
	int answer = 0;
	if (strcmp(grade, "S") == 0)answer = price * 0.95;
	else if (strcmp(grade, "G") == 0) answer = price * 0.9;
	else answer = price * 0.85;

	return answer;
}
int main() {
	int price = 1000;
	char* grade = "S";
	int result = solution(price, grade);
	printf("%d", result);	
}