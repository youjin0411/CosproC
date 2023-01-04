#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(char pass[], char key[]) {
	int answer = 0;
	int match_cnt = 0;
	for (int i = 0; key[i] != 0; i++) {
		for (int k = 0; pass[k] != 0; k++) {
			if (key[i] == pass[k]) {
				match_cnt++;
				break;
			}
		}
	}
	if (match_cnt >= strlen(key)) answer = 1;
	return answer;
}
int main() {
	char pass[] = { "dkj9#Ga#9" };
	char key[] = { "Ga#9" };
	printf("%d", solution(pass, key));
}