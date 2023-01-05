#include<stdio.h>
#include<stdlib.h>
int solution(int walls) {
	// ���� ���� : walls
	int answer = 0;
	int painted_walls = 0; //ĥ�� ���� ���� 
	int i;
	//A: 1�ð�, B: 2�ð�, C: 4�ð�
	// �� 10���� ���� ������ 4�ð��� �������� C�� 1��, B�� 2��, C�� 4���� �Ͽ� �� 7���� �ϰ� C�� 1���� A�� 2���� �� ������ 10�� �ϼ� 
	for (i = 1; painted_walls < walls; i++) {
		//(1�ð��� A�� �ϴ� ��) + (1�ð��� B�� �ϴ� ��) + (4�ð��� B�� �ϴ� ��) 
		painted_walls = (i)+ (i / 2) + (i / 4);
	}
	answer = i - 1; //i++�� �ݺ��� �� �� �־��� ������ -1�� ����� �Ѵ�.
	return answer;
}
int main() {
	int walls = 10; //���� 10��
	printf("%d", solution(walls));
}