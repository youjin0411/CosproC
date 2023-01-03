//문자열 복사하기
//char *strcpy(char *strDestionation, const char *strSource);
// strcpy(복사한 값을 넣을 변수, 복사할 변수);
//strSource의 내용을 strDestionation으로 복사한다,
//헤더파일 string.h
//반환값 strDestination의 주소값 

//문자열 비교하기
//int strcmp(const char string1, const char *string2);
//strcmp(비교 기준이 될 변수, 비교할 변수)
//두 문자열을 비교한 결과를 반환한다. 
//헤더파일 string.h
//반환값 : string1과 string2를 사전순으로 비교한 후 string이 string2보다 작으면 -1, 크면 1, 같으면 0 반환 (ASCII 값 참고. 한글은 영문보다 항상 크다)

//문자열 결합하기
//char* strcat(char * strDestination, const* char *strSource);
// strcat(붙일 변수, 결합당할 변수);
//strDestination에 strSource의 내용을 덧붙인다. strDestination에서 널문자를 찾아 그곳에서부터 추가한다. 
//헤더파일 string.h
//반환값 : strDestination
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {
	char s1[100] = "대한민국 파이팅";
	char s2[100];
	char s3[100];

	//문자열의 길이를 반환한다.
	printf("s1 문자열의 길이: %d\n", strlen(s1));

	strcpy(s2, s1); //s1 배열의 값을 s2 배열로 복사한다. 
	printf("%s\n", s2); 

	strcat(s2, s1); //s1의 배열의 값을 s2의 값에 덧붙인다. 
	printf("%s\n", s2);

	//문자열을 비교, 일치하면 0 다르면 1 또는 -1
	printf("%d\n", strcmp("school", "boy"));
	printf("%d\n", strcmp("boy", "school"));
	printf("%d\n", strcmp("boy", "boy"));
}