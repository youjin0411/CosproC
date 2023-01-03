#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
	int number = 5;
	int* ptr = &number; //*ptr 포인터 변수에 number의 주소를 가리키도록 함
	*ptr = 10; //*ptr변수가 가리키는 number주소 즉, number가 10으로 변한다. 
	printf("%d\n", number);
	printf("%d\n", * ptr);
}