#include<stdio.h>
#include<stdlib.h>
void *Swap(int *pa, int *pb) { //���� ���� ���� 
	//a�� b�ڸ� ���� 
	int a = *pa;
	int b = *pb;
	*pa = b;
	*pb = a;
}
int main() {
	int a = 5, b = 8;
	Swap(&a, &b);
	printf("�Լ� ȣ�� ��\n");
	printf("a = %d b = %d\n", a, b);
	return 0;
}