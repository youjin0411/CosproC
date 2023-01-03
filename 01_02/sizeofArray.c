#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char name[20] = { 0, };
	printf("%d\n", sizeof(name)); //이름이 name인 공간의 크기 
	printf("%d\n", sizeof(*(name))); //주소가 name인 공간의 크기
	printf("%d\n", sizeof(*(&name))); //주소가 &name인 공간간의 크기

	char name2[3][20] = { 0, };
	printf("%d\n", sizeof(name2)); //이름이 name인 공간의 크기
	printf("%d\n", sizeof(*(name2))); //주소가 name인 공간의 크기
	printf("%d\n", sizeof(*(name2[0]))); //주소가 name[0]인 공간의 크기
}