#include<stdio.h>
#include<stdlib.h>
int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;  //스트라이크
	result[1] = 0;  //볼 
	for (int i = 0; i < 3; i++) { //3자리 수 
		temp = b;
		for (int j = 0; j < 3; j++) {
			if (a % 10 == temp % 10) { //a와 b에 모두 같은 값이 있을 때
				if (i == j) result[0]++; //i,j의 위치가 같다면 스트라이크
				else result[1]++; //i,j 위치가 다르지만 값이 같다면 볼 ㄹ
			}
			temp /= 10; //temp /= 10; 
		}
		a /= 10;
	}
	return result;
} 
int main() {
	int a = 123;
	int b = 345;
	int* res = solution(a, b);
	for (int i = 0; i < 2; i++) {
		printf("%d", res[i]);
	}
}
