#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int stones[], int stones_len) {
	int count = 0;
	int i = 0;
	while (i != stones_len) {
		count++;
		i += stones[i];
	}
	return count;
}
int main() {
	int stones[] = { 2, 5, 1, 3, 2, 1 };
	int stones_len = 6;
	printf("%d", solution(stones, stones_len));
}