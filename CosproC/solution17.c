#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* solution(char* s) {
	char* result = (char*)malloc(sizeof(char) * strlen(s) + 1);
	strcpy(result, s);
	int n = strlen(s);
	for (int i = 0; i < strlen(s); i++) {
		if (result[i]=='a') result[i] = 'z';
		else if(result[i] == 'z') result[i] = 'a';
	} 
	return result;
}
int main() {
	char* s = "abz";
	char* result = solution(s);
	for (int i = 0; i < strlen(result); i++) {
		printf("%c", result[i]);
	}
}