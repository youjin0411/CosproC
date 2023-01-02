#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int solution(int p[]) {
	//컴파일러는 버전(바이트 크기)에 따라서 포인터변수의 크기가 달라질 수도 있다. 
	printf("p의 크기 %d \n", sizeof(p));   // p는 포인터 변수이다.  포인터변수의 고정된 크기 4byte/8byte(64byte)	
	return 0;
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("arr의 크기 %d \n", sizeof(arr)); //4byte * 10 => 40byte 
	solution(arr);
	return 0;
}