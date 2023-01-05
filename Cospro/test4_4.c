#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1; i < strlen(src); i++) {
		dest[i] = src[i] + dest[0]; //나머지 글자 + dest[0] 첫 글자   
	}
	dest[i] = 0;
	return 0;
}

char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char) * strlen(string) + 3);
	func_a(encoded, string);
	return encoded;
}

int main() {
	char string[] = "abs";
	char* result = solution(string);
	for (int i = 0; i < result[i] != 0; i++) {
		printf("%c", result[i]);
	}
}