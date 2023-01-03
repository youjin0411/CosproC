#include<stdio.h>
#include <stdlib.h>

void main() {
	char* pChar;
	int* pInt;
	double *pDouble;
	//포인터 변수는 자체 고정 크기이다.
	// 포인터 변수의 크기는 int이든 double이든 char이든 모두 4 혹은 8 byte에요.
	//포인터변수 선언 시 자료형은 포인터 변수가 가리키고 있는 곳의 자료형을 의미한다.
	printf("포인트 변수가 가리키는 값의 주소 값");
	printf("%d\n", sizeof(pChar)); //64bit에서 실행함으로 8byte가 나옴 	
	printf("%d\n", sizeof(pInt)); //8byte
	printf("%d\n", sizeof(pDouble)); //8byte
	printf("포인트* 변수가 가리키는 값의 주소\n");
	printf("%d\n", sizeof(*pChar)); //1byte -> *pChar이 가리키는 값이 char이므로 
	printf("%d\n", sizeof(*pInt)); //4byte   -> *pInt가 가리키는 값이 int이므로
	printf("%d\n", sizeof(*pDouble)); //8byte  -> *pDouble이 가리키는 값이 double이므로 
}