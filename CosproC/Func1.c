#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* Add(int x, int y) { //������(�ּ�)�� �����ϴ� Add�Լ� (�ּҸ� �����ϴ� ��� ��ȯ���� *�� �ٴ´�.) 
	int sum;
	sum = x + y;
	return &sum; // <-- ���������� sum�� �ּҸ� ��ȯ�Ѵ�. 
}

int main() {
	int x = 5, y = 7;
	int* pz; // <-- �Լ��� ��ȯ���� �ּ��̴�. 
	pz = Add(x, y);
	//Add�Լ��� ����� ���Ŀ��� ���� �� �� ������,
	printf("%d\n", *pz);
	//���Ŀ��� ������ ���� ��µȴ�. 
	//���������� sum�� �ּҸ� ��ȯ�ϸ� �� ���� �������� ���� ���� !! 
	printf("%d\n", *pz);
	return 0;
}