#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* solution(char* str) {
	char* answer = (char*)malloc(sizeof(char) * strlen(str));
	answer[0] = str[0]; //answer[0]번지에 먼저 str[0]을 넣고 시작함. 
	int len = 0;
	len++; //answer의 길이
	for (int i = 1; i < strlen(str); i++) {
		if (str[i - 1] != str[i]) {
			answer[len++] = str[i];
		}
	}
	answer[len] = NULL;
	return answer;
}
int main() {
	char* str = "sssseeentenncee";
	char* result = solution(str);
	printf("%s", result);
}