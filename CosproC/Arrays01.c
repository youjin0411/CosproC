#include<stdio.h>
void main(){
	int arr[3][4] = { 0, };
	printf("arr�� ũ��: %d\n", sizeof(arr)); //3 * 4 = 12 * 4byte = 48
	printf("arr[0]�� ũ��: %d \n", sizeof(arr[0])); //4byte * 4byte
	printf("arr[1]�� ũ��: %d \n", sizeof(arr[1])); //4byte * 4byte
	printf("arr[2]�� ũ��: %d \n", sizeof(arr[2])); //4byte * 4byte
	printf("arr[3]�� ũ��: %d \n", sizeof(arr[3])); //4byte * 4byte
	printf("arr[2][3]�� ũ��: %d \n", sizeof(arr[2][3])); //4byte �� 2�� 3���� �� 0�� ũ�� int�� byte ���� 

	char ch = '9';
	int number = ch - 48; // c - '0'; //���ڿ��� ������ ��ȯ 
	printf("number : %3d\n", number); // 9
	printf("ch�� ũ�� : %3d", ch); //char ch�� �ƽ�Ű�ڵ� 57 = '9', �� 57�� ����
}

