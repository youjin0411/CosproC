#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
	int number = 5;
	int* ptr = &number; //*ptr ������ ������ number�� �ּҸ� ����Ű���� ��
	*ptr = 10; //*ptr������ ����Ű�� number�ּ� ��, number�� 10���� ���Ѵ�. 
	printf("%d\n", number);
	printf("%d\n", * ptr);
}