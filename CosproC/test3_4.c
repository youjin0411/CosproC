#include<stdio.h>
#include<stdlib.h>
int solution(int walls) {
	// 벽의 개수 : walls
	int answer = 0;
	int painted_walls = 0; //칠한 벽의 개수 
	int i;
	//A: 1시간, B: 2시간, C: 4시간
	// 즉 10개의 벽이 있으면 4시간을 기준으로 C는 1개, B는 2개, C는 4개를 하여 총 7개를 하고 C가 1개를 A가 2개를 더 맡으면 10개 완성 
	for (i = 1; painted_walls < walls; i++) {
		//(1시간에 A가 하는 수) + (1시간에 B가 하는 수) + (4시간에 B가 하는 수) 
		painted_walls = (i)+ (i / 2) + (i / 4);
	}
	answer = i - 1; //i++를 반복할 때 해 주었기 때문에 -1을 해줘야 한다.
	return answer;
}
int main() {
	int walls = 10; //벽이 10개
	printf("%d", solution(walls));
}