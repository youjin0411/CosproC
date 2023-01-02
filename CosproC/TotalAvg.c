#include<stdio.h>
#include<stdlib.h>

void main() {
	int arr[10]; //랜덤의 수 10개를 담을 배열
	int i, sum;  //반복 할 수, 합
	double avg; //실수형인 평균
	int len = sizeof(arr) / sizeof(int); //배열의 길이
	//int len = sizeof(arr) / sizeof(arr[0]);
	//입력
	for (i = 0; i < len; i++) arr[i] = rand() % 101; // 랜덤으로 0 ~ (101-1)까지의 숫자를 arr[i] 위치에 대입한다.
	//요소들의 총합 구하기
	sum = 0;
	for (i = 0; i < len; i++) sum += arr[i]; //모든 arr[i]의 값들을 sum에 넣어준다.
	avg = (double)sum / len; //avg는 실수형이므로 정수형인 sum을 강제형변환으로 (double)실수형으로 만들어준 후 배열의 길이만큼 나누어 평균을 구한다. 

	//출력
	printf("배열의 길이 %d\n", len);
	printf("합계 : %d\n", sum);
	printf("평균 : %.1f\n", avg); //소수점 자리 1자리까지만 출력 -> .1하지 않으면 소수점 자리 6자리까지 출력함. 
}