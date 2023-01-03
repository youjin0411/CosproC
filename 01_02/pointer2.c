#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {
	int number;
	int* ptr = NULL; //주소를 저장하지 않은 상태를 NULL로 표시
	number = 5;
	printf("number의 값 : %d\n", number); //초기 값 : 5
	
	ptr = &number; //number 변수의 주소를 가리킨다.
	*ptr = *ptr + 5; //*ptr는 number 라고 쓴 것과 같다. 즉 number = number + 5와 같음 
	printf("number의 값 : %d\n", number); //포인터 주소 연동 후 값 : 10

	//number, ptr 주소값 출력 
	printf("number의 주소값: %p\n", &number); //&주소연산자, -> 주소값 %p(16진수) 로 출력 
	printf("*ptr의 주소값: %p\n", ptr); //- > 주소값 %p(16진수)로 출력 
}