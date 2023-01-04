#include<stdio.h>
#include<stdlib.h>
int solution(int weight[], int weight_len, int k) {
	int answer = 0;
	for (int i = 0; i < weight_len; i++) {
		if (weight[i] > k) answer++;
	}
	return answer;
}
int main() {
	int weight[] = { 65,70, 75, 80,84 };
	int weight_len = 5;
	int k = 75;
	printf("%d", solution(weight, weight_len, k));
}