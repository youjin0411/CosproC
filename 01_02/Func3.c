#include<stdio.h>
#include<stdlib.h>
void *Swap(int *pa, int *pb) { //주소를 전달받는 함수
	//a와 b자리 변경 
	int a = *pa; // 전달받은 주소(a)의 값을 복사한다.
	int b = *pb; // 전달받은 주소(b)의 값을 복사한다, 
	*pa = b;
	*pb = a;
}
int main() {
	int a = 5, b = 8;
	Swap(&a, &b); //변경될 변수의 주소(&)를 전달한다. 
	printf("함수 호출 후\n");
	printf("a = %d b = %d\n", a, b);
	return 0;
}