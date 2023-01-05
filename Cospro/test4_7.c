#include<stdio.h>
#include<stdlib.h>
int solution(char input[], int arr_len) {
	int answer = 0;
	int x, y;
	x = y = 0;
	for (int i = 0; i < arr_len; i++) {
		if (input[i] == 'w') y++;
		else if (input[i] == 's') y--;
		else if (input[i] == 'a') x--;
		else if (input[i] == 'd') x++;
		answer = (x == y) ? answer + 1 : answer;
	}
	return answer;
}
int main() {
	char input[] = "wsad";
	int arr_len = 4;	
	printf("%d", solution(input, arr_len));
}