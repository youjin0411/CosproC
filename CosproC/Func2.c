#include<stdio.h>
#include<stdlib.h>
void Swap(int a, int b) { //���� ���� ���� 
	//a�� b�ڸ� ���� 
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 5, b = 8;
	Swap(a, b);
	printf("�Լ� ȣ�� ��\n");
	printf("a = %d b = %d\n", a, b);
	return 0;
}