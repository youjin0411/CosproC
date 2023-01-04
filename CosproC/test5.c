#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int price, char* grade) {
	int answer = 0;
	if (strcmp(grade, "S") == 0) answer = price * 1.05;
	else if (strcmp(grade, "G") == 0) answer = price * 1.1;
	else answer = price * 1.15;
	return answer;
}

int main() {
	int price = 2000;
	char* grade = "S";
	printf("%d", solution(price, grade));
}