#include<stdio.h>
#include<stdlib.h>
void *Swap(int *pa, int *pb) { //�ּҸ� ���޹޴� �Լ�
	//a�� b�ڸ� ���� 
	int a = *pa; // ���޹��� �ּ�(a)�� ���� �����Ѵ�.
	int b = *pb; // ���޹��� �ּ�(b)�� ���� �����Ѵ�, 
	*pa = b;
	*pb = a;
}
int main() {
	int a = 5, b = 8;
	Swap(&a, &b); //����� ������ �ּ�(&)�� �����Ѵ�. 
	printf("�Լ� ȣ�� ��\n");
	printf("a = %d b = %d\n", a, b);
	return 0;
}