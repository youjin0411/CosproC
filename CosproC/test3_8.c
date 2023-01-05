#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(char pass[], char key[]) {
	int answer = 0;
	int match_cnt = 0;
	for (int i = 0; key[i] != 0; ++i) { //Key값이 모두 포함되어 있어야 하므로 Key부터 시작
		for (int k = 0; pass[k] != 0; ++k) { //Key값이 pass 안에 포함되어 있는지 알기 위해 pass만큼 반복
			if (key[i] == pass[k]) { 
				match_cnt++;
				break;
			}
		}
	}
	if (match_cnt >= strlen(key)) answer = 1; //Key에 포함된 문자가 pass에 모두 포함되어 있는가 확인하기 위해 길이가 동일한지 비교
	return answer;
}
int main() {
	char pass[] = { "dkj9#Ga#9" };
	char key[] = { "Ga#9" };
	printf("%d", solution(pass, key));
}