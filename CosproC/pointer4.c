#include<stdio.h>
#include<stdlib.h>

void main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pArr;
	int i;
	//�迭�� ����([0]�� �����) �ּҸ� pArr�� ����
	pArr = &arr[0];
	printf("arr[i]�� �ּ� : �� ���\n");
	for (i = 0; i < 10; i++) printf("%p : %d\n", &arr[i], arr[i]); //%p�� 16������ �ּҰ� ��� 
	printf("������ �迭 �ּ� : �� ���\n");
	for (i = 0; i < 10; i++) printf("%p : %d\n", pArr + i, *(pArr + i)); //pArr + i�� pArr[0] + i�� �����ϴ�. �� pArr[0] + 1 ,2 ,3 ,4 ......
}
