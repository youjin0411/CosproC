#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {
	int number;
	int* ptr = NULL; //�ּҸ� �������� ���� ���¸� NULL�� ǥ��
	number = 5;
	printf("number�� �� : %d\n", number); //�ʱ� �� : 5
	
	ptr = &number; //number ������ �ּҸ� ����Ų��.
	*ptr = *ptr + 5; //*ptr�� number ��� �� �Ͱ� ����. �� number = number + 5�� ���� 
	printf("number�� �� : %d\n", number); //������ �ּ� ���� �� �� : 10

	//number, ptr �ּҰ� ��� 
	printf("number�� �ּҰ�: %p\n", &number); //&�ּҿ�����, -> �ּҰ� %p(16����) �� ��� 
	printf("*ptr�� �ּҰ�: %p\n", ptr); //- > �ּҰ� %p(16����)�� ��� 
}