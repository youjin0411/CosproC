#include<stdio.h>
#include <stdlib.h>

void main() {
	char* pChar;
	int* pInt;
	double *pDouble;
	//������ ������ ��ü ���� ũ���̴�.
	// ������ ������ ũ��� int�̵� double�̵� char�̵� ��� 4 Ȥ�� 8 byte����.
	//�����ͺ��� ���� �� �ڷ����� ������ ������ ����Ű�� �ִ� ���� �ڷ����� �ǹ��Ѵ�.
	printf("����Ʈ ������ ����Ű�� ���� �ּ� ��");
	printf("%d\n", sizeof(pChar)); //64bit���� ���������� 8byte�� ���� 	
	printf("%d\n", sizeof(pInt)); //8byte
	printf("%d\n", sizeof(pDouble)); //8byte
	printf("����Ʈ* ������ ����Ű�� ���� �ּ�\n");
	printf("%d\n", sizeof(*pChar)); //1byte -> *pChar�� ����Ű�� ���� char�̹Ƿ� 
	printf("%d\n", sizeof(*pInt)); //4byte   -> *pInt�� ����Ű�� ���� int�̹Ƿ�
	printf("%d\n", sizeof(*pDouble)); //8byte  -> *pDouble�� ����Ű�� ���� double�̹Ƿ� 
}