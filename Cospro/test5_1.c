#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int a[], int N) {
	int answer = 0;
	//int total = 0;
	////완충 시 최대 40km까지 이동할 수 있다. 
	//for (int i = 0; i < N; i++) {
	//	total += a[i];
	//	if (total > 40) {
	//		answer++;
	//		total = total - 40;
	//	}
	//}
	int energy = 40;
	for (int i = 0; i < N; i++) {
		if (a[i] > energy) {
			energy = 40;
			answer++;
		}
		energy -= a[i];
	}
	return answer;
}
int main() {
	int a[] = { 20, 10, 30, 30 }; 
	int N = 4;
	printf("%d", solution(a, N));
}