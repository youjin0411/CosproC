#include<stdio.h>
#include<stdlib.h>
void Swap(int a, int b) { //값에 의한 전달 
	//a와 b자리 변경 
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 5, b = 8;
	Swap(a, b);
	printf("함수 호출 후\n");
	printf("a = %d b = %d\n", a, b);
	return 0;
}