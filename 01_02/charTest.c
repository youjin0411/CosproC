#include<stdio.h>
void main() {
	char color[5][10] = { "red", "green", "blue", "brown", "cyan" }; //color[5][10] 5�� 10���� 5���� �ܾ��� ���̰� 10�� �����̴�. 
	int i, k;
	for (i = 0; i < 5; i++) printf("%s\n", color[i]); //�ະ�� ��� ��, �ܾ ���

	//���ڵ��� �ϳ��� ���
	for (i = 0; i < 5; i++) {
		for (k = 0; k < 10; k++) {
			printf("%c", color[i][k]);
		}
		printf("\n");
	}
}