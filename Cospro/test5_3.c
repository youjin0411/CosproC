#include<stdio.h>
#include<stdlib.h>
//���縦 �߶� ����� �� �ִ���
int func_a(int a[], int n, int length) {
	for (int i = 0; i < n; i++) {
		if (a[i] >= length) {
			return i;
		}
	}
	return -1;
}
int solution(int N, int orders[], int orders_len) {
	int* material = (int*)malloc(sizeof(int) * N); //materia�� ������ ����ŭ ���� �� �ִ� �͵� 
	int k = 0;
	int price = 0;
	//���̰� 8�� ���縸 �����. ��, �ʱ�ȭ 8�� ����
	for (int i = 0; i < N; i++) material[i] = 8;
	for (int i = 0; i < orders_len; i++) {
		k = func_a(material, N, orders[i]);
		if (k >= 0) {
			material[k] -= orders[i];
			price += 3000 * orders[i]; //����� ���̴� 3000�� 
		}
	}
	return price;
}
int main() {
	//���̰� 8�� ���縸 ����� 
	int N = 3; //������ ����
	int orders[] = { 2,4, 7, 4,1 };
	int orders_len = 5;
	printf("%d", solution(N, orders, orders_len));
}