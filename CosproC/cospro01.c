#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int) * shirt_size_len);

	for (int i = 0; i < shirt_size_len; i++) { //str�Լ��� Ȱ���Ͽ� ���ڿ� ���� �� 
		answer[i] = 0;  //answer �迭�� ��� 0���� �ʱ�ȭ 
		if (strcmp(shirt_size[i], "XS") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "S") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "M") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "L") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "XL") == 0) answer[4]++;
		else answer[5]++;
	}
	return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("{");
	for (int i = 0; i < shirt_size_len; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("}");
}
