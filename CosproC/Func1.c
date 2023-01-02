#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* Add(int x, int y) { //포인터(주소)를 리턴하는 Add함수 (주소를 리턴하는 경우 반환형에 *이 붙는다.) 
	int sum;
	sum = x + y;
	return &sum; // <-- 지역변수인 sum의 주소를 반환한다. 
}

int main() {
	int x = 5, y = 7;
	int* pz; // <-- 함수의 반환형이 주소이다. 
	pz = Add(x, y);
	//Add함수가 종료된 직후에는 값을 볼 수 있지만,
	printf("%d\n", *pz);
	//이후에는 엉뚱한 값이 출력된다. 
	//지역변수인 sum의 주소를 반환하면 그 값이 유지되지 않음 주의 !! 
	printf("%d\n", *pz);
	return 0;
}