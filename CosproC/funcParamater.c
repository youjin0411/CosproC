#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int func_a(char (*p)[20], int len) { //char (*p)[20] �迭 ������ -> 1�� �迭(��)�� �ּҸ� �����ϴ� ������ ��, *p[20] ������ �迭�� �ٸ���. �켱���� p[20] > (*p)[20]
	return 0;
}
int main() {
	char titles[5][20] = { "first", "second", "third", "fourth", "fifth" };
	//2�� �迭�� ����
	func_a(titles, 5); //<-- �迭�� ���̴� 5�̴�. 
	return 0;
}