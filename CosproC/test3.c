#include<stdio.h>
#include<stdlib.h>
int solution(int scores[], int scores_les) {
	int count = 0;
	for (int i = 0; i < scores_les; i++) {
		if (scores[i] >= 0 && scores[i] <= 200) count++;
	}
	return count;
}
int main() {
	int scores[] = { 45, 90, 100, 0, 23, 98 , 240};
	int score_len = 7;
	printf("%d", solution(scores, score_len));
}