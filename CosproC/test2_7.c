#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* solution(char* s) {
	char* str = (char*)malloc(sizeof(int) * (strlen(s) + 1));
	strcpy(str, s);
	for (int i = 0; i < strlen(s); i++) {
		if (str[i] >= '1' && str[i] <= '9') {
			str[i] = 'i' - str[i];
		}
	}
	return str;
}
int main() {
	char* s = "ab1c3d";
	char* result = solution(s);
	for (int i = 0; i < strlen(result); i++) printf("%c", result[i]);
}