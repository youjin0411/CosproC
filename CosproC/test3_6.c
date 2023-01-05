#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; i++) {
		//string[i]안에 문자 0 ~ 9까지의 숫자가 포함되어 있는가 ? 
		if ('0' <= string[i] && string[i] <= '9') {
			//현재 들어있는 number의 수를 조건에 해당될 때마다 * 10을 해준 후 일의자리 숫자를 더해준다.
			//예를 들어 "2018"일 때 
			// 0 = 0 * 10 + 2;
			// 2= 2 * 10 + 0;
			// 20 = 20 * 10 + 1
			// 201 = 201 * 10 + 8;
			//2018
			number = number * 10 + (string[i] - 48);
		}
		else {
			//이어진 문자가 아닌 경우 2018, 일 때는 지금까지의 수를 더해준다. 
			answer += number; //answer += 2018
			//number을 초기화해줌
			number = 0; //2018 사라짐
		}
	}
	return answer;
}
int main() {
	char string[] = "korean world cup 2018, olympic 10, 11 pm 1.";
	printf("%d", solution(string)); //2040
	//solution(string);
}