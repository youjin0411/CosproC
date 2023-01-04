#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int) * 6);
	memset(answer, 0, sizeof(int) * 6);
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "7") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "7.5") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "8") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "8.5") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "9") == 0) answer[4]++;
		else answer[5]++;
	}
	return answer;
}
int main() {
	char* shirt_size[] = { "7", "7", "8.5","9","9.5", "7" };
	int shirt_size_len = 6;
	int* result = solution(shirt_size, shirt_size_len);
	printf("%s", "[");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf("%s", ", ");
		printf("%d", result[i]);
	}
	printf("%s", "]");
}