#include<stdio.h>
#include<stdlib.h>
int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 3; i++) { // 3장의 카드 
		for (int k = i+1; k < 5; k++) { 
			for (int m = k+1; m < 5; m++) {
				if ((cards[i] + cards[k] + cards[m]) % 2 == 1)
					answer++;
			}
		}
	}
	return answer;
}
int main() {
	int cards[] = {7, 5, 6, 4, 9};
	printf("%d", solution(cards)); //4
}