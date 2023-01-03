#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int solution(int scores[], int scores_len) {
	int count = 0; 
	for (int i = 0; i < scores_len; i++) {
		if (650 <= scores[i] && scores[i] < 800) {
			++count;
		}
	}
	return count;
}
int main() {
	int scores[] = { 600,900,780,660,800,600,500,720,860,700 };
	int scores_len = 10;
	int result = solution(scores, scores_len);
	printf("%d", result);
}