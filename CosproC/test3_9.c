#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* solution(int scores[][4], int scores_len) {
	//-1은 자기자신, 1은 패배, 0은 승리
	int* answer = (int*)malloc(sizeof(int) * scores_len);
	//memset(answer, 0, sizeof(int) * scores_len);
	//for (int i = 0; i < scores_len; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		if (scores[i][j] == 1) answer[i]++;
	//	}
	//	answer[i] = answer[i] * 2;
	//}
	for (int i = 0; i < 4; i++) {
		answer[i] = 0;
		for (int j = 0; j < 4; j++) {
			if (i != j) answer[i] += (scores[i][j] * 2);
		}
	}
	return answer;
}
int main()
{
	int score[][4] = {  //[][4]는 한 행 안에 들어있는 숫자의 개수 
		{-1, 1, 0, 0},
		{0,  -1, 0, 1},
		{1, 1, -1, 1},
		{1, 0, 0, -1}
	};
	int scores_len = 4; //행의 길이
	int* result = solution(score, scores_len);
	printf("%s", "[");
	for (int i = 0; i < 4; i++) {
		if (i != 0) printf("%s", ",");
		printf("%d", result[i]);
	}
	printf("%s", "]");
}