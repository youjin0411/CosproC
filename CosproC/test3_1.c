#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�̵��Ÿ� ���̸� ���ϴ� �Լ�
//��� ���� �� ����� �Ÿ� ���̰� 10km�̻� ���� �� �� �ð��� ����
double solution(int a, int b) {
	double answer = 0; 
	int diff = (a > b) ? a - b : b - a; //���׿�����  -> 2
	answer = 10.0 / diff; // 10 / 2 = 5
	return answer * 60; // 5 * 60
}
int main() {
	int a = 4; // 4 * 5 = 20; 
	int b = 2; // 2 * 5 = 10
	printf("%f", solution(a, b));
}