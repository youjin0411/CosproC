#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {
	int* pArr[5]; //�����ͺ��� 5���� �����ϴ� 1�� �迭
	pArr[0] = 0;
	pArr[1] = 1;
	pArr[2] = 2;
	pArr[3] = 3;
	pArr[4] = 4;

	char* pStr[4] = { "red", "green", "blue", "gray" };
	printf("[0]�� ���ڿ� ��� : %s \n", pStr[0]);
	printf("[1]�� ���ڿ� ��� : %s \n", pStr[1]);
	printf("[2]�� ���ڿ� ��� : %s \n", pStr[2]);
	printf("[3]�� ���ڿ� ��� : %s \n", pStr[3]);
}