#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; i++) {
		//string[i]�ȿ� ���� 0 ~ 9������ ���ڰ� ���ԵǾ� �ִ°� ? 
		if ('0' <= string[i] && string[i] <= '9') {
			//���� ����ִ� number�� ���� ���ǿ� �ش�� ������ * 10�� ���� �� �����ڸ� ���ڸ� �����ش�.
			//���� ��� "2018"�� �� 
			// 0 = 0 * 10 + 2;
			// 2= 2 * 10 + 0;
			// 20 = 20 * 10 + 1
			// 201 = 201 * 10 + 8;
			//2018
			number = number * 10 + (string[i] - 48);
		}
		else {
			//�̾��� ���ڰ� �ƴ� ��� 2018, �� ���� ���ݱ����� ���� �����ش�. 
			answer += number; //answer += 2018
			//number�� �ʱ�ȭ����
			number = 0; //2018 �����
		}
	}
	return answer;
}
int main() {
	char string[] = "korean world cup 2018, olympic 10, 11 pm 1.";
	printf("%d", solution(string)); //2040
	//solution(string);
}