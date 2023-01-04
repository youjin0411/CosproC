#include<stdio.h>
#include<stdlib.h>
int solution(int walls) {
	// 벽의 개수 : walls
	int answer = 0;
	int painted_walls = 0; //칠한 벽의 개수 
	int i;
	//A: 1시간, B: 2시간, C: 4시간
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+ (i / 2) + (i / 4);
	}
	answer = i - 1;
	return answer;
}
int main() {
	int walls = 10;
	printf("%d", solution(walls));
}