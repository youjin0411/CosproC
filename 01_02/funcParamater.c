#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int func_a(char (*p)[20], int len) { //char (*p)[20] 배열 포인터 -> 1차 배열(행)의 주소를 저장하는 포인터 즉, *p[20] 포인터 배열과 다르다. 우선순위 p[20] > (*p)[20]
	return 0;
}
int main() {
	char titles[5][20] = { "first", "second", "third", "fourth", "fifth" };
	//2차 배열의 전달
	func_a(titles, 5); //<-- 배열의 길이는 5이다. 
	return 0;
}