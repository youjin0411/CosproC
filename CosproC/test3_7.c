#include<stdio.h>
#include<stdlib.h>
int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;  //��Ʈ����ũ
	result[1] = 0;  //�� 
	for (int i = 0; i < 3; i++) { //3�ڸ� �� 
		temp = b; //�Ʒ����� �� �ڸ����� �и��� ���� /= 10�� �� �ֱ� ������ i�� �� �ݺ��� �� ������ temp�� b�� �־��ش�. 
		for (int j = 0; j < 3; j++) { //3 �ڸ� �� 
			if (a % 10 == temp % 10) { //a�� b�� ���� �ڸ� ���� ���� ��
				if (i == j) result[0]++; //a�� b�� ��ġ�� ���ٸ� ��Ʈ����ũ
				else result[1]++; //a�� b�� ���� ������ ��ġ�� �ٸ��ٸ� ��
			}
			temp /= 10; //temp�� ���� �ڸ� ���� ������. �� 345�� �� 5�� ������ 34�� �����, 34���� 3����....
		} //a= 123�̸�, i=1�� �� b�� ���� �ȿ� a�� �ִ°� ��� Ž���� ���� �� a /= 10���ؼ� a�� 12�� ������� �ش�.
		a /= 10;
	}
	return result;
} 
int main() {
	int a = 123;
	int b = 345;
	int* res = solution(a, b);
	for (int i = 0; i < 2; i++) {
		printf("%d", res[i]);
	}
}
