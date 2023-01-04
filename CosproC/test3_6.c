#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; i < strlen(string); i++) {
		if ('0' < string[i] && string[i] <= '9') {
			number += number * 10 + (string[i] - 48);
		}
		else {
			answer += number;
			number = 0;
		}
	}
	return answer;
}
int main() {
	char string[] = "korean world cup 2018, olympic 10, 11 pm 1.";
	printf("%d", solution(string)); //2040
}