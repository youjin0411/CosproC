#include<stdio.h>
#include<stdlib.h>
int solution(int walls) {
	// ���� ���� : walls
	int answer = 0;
	int painted_walls = 0; //ĥ�� ���� ���� 
	int i;
	//A: 1�ð�, B: 2�ð�, C: 4�ð�
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