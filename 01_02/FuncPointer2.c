#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// ()�� ����ϴ� ������ �켱������* p����[20]�� �� ���� ������(*p)�� �����.
int func_a(char(*p)[20], int n) { //������ p�� ���� �Ű������� �޾ƿ� 
	return 0;
}
int func_b(char* p[], int n) { //char **p�� ����.
	return 0;
}
int main() {
	char titles[5][20] = { "first", "second", "third", "fourth", "fifth" };
	//2�� �迭�� ����
	func_a(titles, 5);

	//������ �迭 par�� �� titles �迭�� �� ���� �����ּҸ� �����Ѵ�. 
	char* par[5]= { titles[0], titles[1], titles[2], titles[3], titles[4] };
	func_b(par, 5); //�迭�� ���̴� 5�̴�. 
	return 0;
}