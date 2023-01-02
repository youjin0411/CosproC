#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {
	char words[6][20] = { "한국", "미국", "일본", "영국", "독일", "호주" };
	int len = sizeof(words[6]) / sizeof(char); //words 행의 길이를 구함
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (strcmp(words[i], "독일") == 0) { //strcmp는 words[i]와 브라질을 비교하는 문자열 함수로 같으면 0, words[i]가 "독일"보다 작으면 -1, 크면 1 리턴 
			printf("%d번째 자리에 있습니다.", i+1);
			cnt = 1;
			break;
		}
	}
	if (cnt == 0) printf("찾을 수 없습니다.");
}