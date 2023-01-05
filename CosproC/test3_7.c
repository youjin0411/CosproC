#include<stdio.h>
#include<stdlib.h>
int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;  //스트라이크
	result[1] = 0;  //볼 
	for (int i = 0; i < 3; i++) { //3자리 수 
		temp = b; //아래에서 각 자리별로 분리를 위해 /= 10을 해 주기 때문에 i가 새 반복을 할 때마다 temp에 b를 넣어준다. 
		for (int j = 0; j < 3; j++) { //3 자리 수 
			if (a % 10 == temp % 10) { //a와 b의 일의 자리 수가 같을 때
				if (i == j) result[0]++; //a와 b의 위치가 같다면 스트라이크
				else result[1]++; //a와 b의 값은 같지만 위치가 다르다면 볼
			}
			temp /= 10; //temp의 일의 자리 수를 버린다. 즉 345일 때 5를 날리고 34로 만들고, 34에서 3으로....
		} //a= 123이며, i=1일 때 b의 숫자 안에 a가 있는가 모두 탐색이 끝난 후 a /= 10통해서 a를 12로 만들어준 준다.
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
