#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int solution(int p[]) {
	//�����Ϸ��� ����(����Ʈ ũ��)�� ���� �����ͺ����� ũ�Ⱑ �޶��� ���� �ִ�. 
	printf("p�� ũ�� %d \n", sizeof(p));   // p�� ������ �����̴�.  �����ͺ����� ������ ũ�� 4byte/8byte(64byte)	
	return 0;
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("arr�� ũ�� %d \n", sizeof(arr)); //4byte * 10 => 40byte 
	solution(arr);
	return 0;
}