#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(const char* strings[], int str_len) {
	int answer = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]); //각 행의 문자열의 길이
		answer += (len / 4); //각 행의 문자열의 길이를 4로 나눈 몫을 answer에 더해줌 
		if (len % 4 != 0) //문자열의 길이가 4로 나누어 떨어지지 않을 경우 answer을 증가해줌 
			answer++;
	}
	return answer;
}
int main() {
	char* strings[] = { "abcd", "abcde", "acbsbsbsb", "acbsbsbsbs" };
	int str_len = 4;
	printf("%d", solution(strings, str_len));
}