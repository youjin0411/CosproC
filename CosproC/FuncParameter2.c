#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		arr[i] = i + 100;
	}
	return arr; //�����Ҵ�� �迭�� �����ּҸ� ��ȯ�Ѵ�. 
}
int main() {
	int* result;
	int len = 10;
	result = solution(len); //�迭�� �����ּҸ� ��ȯ�޴´�
	
	for (int i = 0; i <len  ; i++) { //��ȯ���� �迭�� ���̸� �� �� ����.
		printf("%d\n", result[i]);
	}
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//int* solution() { //main���� �迭�� ���̸� �Ű������� ���� ���ϸ� ������ ������ �迭�� ���̸� �� ����� ����. 
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;
//	}
//	return arr; //�����Ҵ�� �迭�� �����ּҸ� ��ȯ�Ѵ�. 
//}
//int main() {
//	int* result;
//	result = solution(); //�迭�� �����ּҸ� ��ȯ�޴´�
//	int len = sizeof(result) / sizeof(result[0]); //������ �迭�� ���̸� �� �� ����. ��� �� : 2�� ���� 8/4 =2byte
//	for (int i = 0; i < 10; i++) { //��ȯ���� �迭�� ���̸� �� �� ����.
//		printf("%d\n", result[i]);
//	}
//	return 0;
//}
