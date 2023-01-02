#include<stdio.h>
#include<stdlib.h>

void main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pArr;
	int i;
	//배열의 사작([0]번 요소의) 주소를 pArr에 저장
	pArr = &arr[0];
	printf("arr[i]의 주소 : 값 출력\n");
	for (i = 0; i < 10; i++) printf("%p : %d\n", &arr[i], arr[i]); //%p는 16진수로 주소값 출력 
	printf("포인터 배열 주소 : 값 출력\n");
	for (i = 0; i < 10; i++) printf("%p : %d\n", pArr + i, *(pArr + i)); //pArr + i는 pArr[0] + i와 동일하다. 즉 pArr[0] + 1 ,2 ,3 ,4 ......
}
