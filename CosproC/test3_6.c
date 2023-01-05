#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(char string[]) {
	int answer = 0;
	int number = 0;
	int k = 0;
	char* num = (char*)malloc(sizeof(char) * strlen(string));
	for (int i = 0; i < strlen(string) != 0; i++) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = number * 10 + (string[i] - 48);
		}
		else {
			answer += number;
			number = 0;
		}
	}
	//printf("%s", num);
	return answer;
}
int main() {
	char string[] = "korean world cup 2018, olympic 10, 11 pm 1.";
	printf("%d", solution(string)); //2040
	//solution(string);
}