//���ڿ� �����ϱ�
//char *strcpy(char *strDestionation, const char *strSource);
// strcpy(������ ���� ���� ����, ������ ����);
//strSource�� ������ strDestionation���� �����Ѵ�,
//������� string.h
//��ȯ�� strDestination�� �ּҰ� 

//���ڿ� ���ϱ�
//int strcmp(const char string1, const char *string2);
//strcmp(�� ������ �� ����, ���� ����)
//�� ���ڿ��� ���� ����� ��ȯ�Ѵ�. 
//������� string.h
//��ȯ�� : string1�� string2�� ���������� ���� �� string�� string2���� ������ -1, ũ�� 1, ������ 0 ��ȯ (ASCII �� ����. �ѱ��� �������� �׻� ũ��)

//���ڿ� �����ϱ�
//char* strcat(char * strDestination, const* char *strSource);
// strcat(���� ����, ���մ��� ����);
//strDestination�� strSource�� ������ �����δ�. strDestination���� �ι��ڸ� ã�� �װ��������� �߰��Ѵ�. 
//������� string.h
//��ȯ�� : strDestination
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {
	char s1[100] = "���ѹα� ������";
	char s2[100];
	char s3[100];

	//���ڿ��� ���̸� ��ȯ�Ѵ�.
	printf("s1 ���ڿ��� ����: %d\n", strlen(s1));

	strcpy(s2, s1); //s1 �迭�� ���� s2 �迭�� �����Ѵ�. 
	printf("%s\n", s2); 

	strcat(s2, s1); //s1�� �迭�� ���� s2�� ���� �����δ�. 
	printf("%s\n", s2);

	//���ڿ��� ��, ��ġ�ϸ� 0 �ٸ��� 1 �Ǵ� -1
	printf("%d\n", strcmp("school", "boy"));
	printf("%d\n", strcmp("boy", "school"));
	printf("%d\n", strcmp("boy", "boy"));
}