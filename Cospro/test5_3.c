#include<stdio.h>
#include<stdlib.h>
//목재를 잘라서 사용할 수 있는지
int func_a(int a[], int n, int length) {
	for (int i = 0; i < n; i++) {
		if (a[i] >= length) {
			return i;
		}
	}
	return -1;
}
int solution(int N, int orders[], int orders_len) {
	int* material = (int*)malloc(sizeof(int) * N); //materia는 목재의 수만큼 만들 수 있는 것들 
	int k = 0;
	int price = 0;
	//길이가 8인 목재만 취급함. 즉, 초기화 8을 해줌
	for (int i = 0; i < N; i++) material[i] = 8;
	for (int i = 0; i < orders_len; i++) {
		k = func_a(material, N, orders[i]);
		if (k >= 0) {
			material[k] -= orders[i];
			price += 3000 * orders[i]; //목재는 길이당 3000원 
		}
	}
	return price;
}
int main() {
	//길이가 8인 목재만 취급함 
	int N = 3; //목재의 개수
	int orders[] = { 2,4, 7, 4,1 };
	int orders_len = 5;
	printf("%d", solution(N, orders, orders_len));
}