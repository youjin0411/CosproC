#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {
	char words[6][20] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��" };
	int len = sizeof(words[6]) / sizeof(char); //words ���� ���̸� ����
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (strcmp(words[i], "����") == 0) { //strcmp�� words[i]�� ������� ���ϴ� ���ڿ� �Լ��� ������ 0, words[i]�� "����"���� ������ -1, ũ�� 1 ���� 
			printf("%d��° �ڸ��� �ֽ��ϴ�.", i+1);
			cnt = 1;
			break;
		}
	}
	if (cnt == 0) printf("ã�� �� �����ϴ�.");
}