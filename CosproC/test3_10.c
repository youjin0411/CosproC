#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(const char* strings[], int str_len) {
	int answer = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]); //�� ���� ���ڿ��� ����
		answer += (len / 4); //�� ���� ���ڿ��� ���̸� 4�� ���� ���� answer�� ������ 
		if (len % 4 != 0) //���ڿ��� ���̰� 4�� ������ �������� ���� ��� answer�� �������� 
			answer++;
	}
	return answer;
}
int main() {
	char* strings[] = { "abcd", "abcde", "acbsbsbsb", "acbsbsbsbs" };
	int str_len = 4;
	printf("%d", solution(strings, str_len));
}