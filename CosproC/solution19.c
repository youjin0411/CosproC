#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int price[], int price_len, int money) {
	int answer = 0;
	for (int i = 0; i < price_len; i++) answer += price[i];
	if (money >= answer) answer = (money-= answer);
	else - 1;
	return answer; 
}
int main() {
	int price[] = { 2100, 3200, 2100, 800 };
	int price_len = 4;
	int money = 10000;
	printf("%d", solution(price, price_len, money));
}