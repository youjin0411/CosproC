#include<stdio.h>
void main(){
	int arr[3][4] = { 0, };
	printf("arr의 크기: %d\n", sizeof(arr)); //3 * 4 = 12 * 4byte = 48
	printf("arr[0]의 크기: %d \n", sizeof(arr[0])); //4byte * 4byte
	printf("arr[1]의 크기: %d \n", sizeof(arr[1])); //4byte * 4byte
	printf("arr[2]의 크기: %d \n", sizeof(arr[2])); //4byte * 4byte
	printf("arr[3]의 크기: %d \n", sizeof(arr[3])); //4byte * 4byte
	printf("arr[2][3]의 크기: %d \n", sizeof(arr[2][3])); //4byte 즉 2행 3열의 값 0의 크기 int형 byte 리턴 

	char ch = '9';
	int number = ch - 48; // c - '0'; //문자열을 정수로 변환 
	printf("number : %3d\n", number); // 9
	printf("ch의 크기 : %3d", ch); //char ch의 아스키코드 57 = '9', 즉 57이 나옴
}

