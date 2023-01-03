#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		arr[i] = i + 100;
	}
	return arr; //동적할당된 배열의 시작주소를 반환한다. 
}
int main() {
	int* result;
	int len = 10;
	result = solution(len); //배열의 시작주소를 반환받는다
	
	for (int i = 0; i <len  ; i++) { //반환받은 배열의 길이를 알 수 없다.
		printf("%d\n", result[i]);
	}
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//int* solution() { //main에서 배열의 길이를 매개변수로 받지 못하면 리턴한 포인터 배열의 길이를 알 방법이 없다. 
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;
//	}
//	return arr; //동적할당된 배열의 시작주소를 반환한다. 
//}
//int main() {
//	int* result;
//	result = solution(); //배열의 시작주소를 반환받는다
//	int len = sizeof(result) / sizeof(result[0]); //포인터 배열의 길이를 알 수 없다. 결과 값 : 2가 나옴 8/4 =2byte
//	for (int i = 0; i < 10; i++) { //반환받은 배열의 길이를 알 수 없다.
//		printf("%d\n", result[i]);
//	}
//	return 0;
//}
